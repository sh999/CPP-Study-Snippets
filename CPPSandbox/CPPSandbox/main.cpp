
#include <iostream>
using namespace std;
class c1{
public:
  int val;
  c1(int v){
    val = v;
  }
  void set_val(int v){
    val = v;
  }
  int get_val(){
    return val;
  }
};
class Owner{
public:
  c1 * member;
  Owner(){
    // member(100);
  }
  void set_member(c1 &a){
    cout << "in set_member\n";
    cout << "member:" << member;
    member = &a;
    cout << "after assign:" << member;
  }
  c1 get_member(){
    cout << "in get_member\n";
    cout << "member: " << member;
    return *member;
  }
};

int main(){
  c1 obj1 = c1(100);
  cout << "initialize subject:\n";
  cout << obj1.get_val() << endl;
  Owner x = Owner();
  x.set_member(obj1);
  cout << "display through subject:\n";
  cout << x.get_member().get_val();
  cout << "\nchange thru owner:\n";
  x.get_member().set_val(200);
  cout << x.get_member().get_val();
  cout << "address of subject\n" << &obj1;
  c1* p = &obj1;
  cout << "address of member of owner\n" << &(x.get_member());
  cout << "test pointer to: " << p;
}
