
#include <iostream>
using namespace std;

class IntStack {
  enum { ssize = 100 };
  int stack[ssize];
  int top;
public:
  IntStack() : top(0) {}
  void push(int i) {
    stack[top++] = i;
  }
  int pop() {
    return stack[--top];
  }
};

int main() {
  IntStack is;
  for(int i = 0; i < 5; i++)
    is.push(i);
  // Pop & print them:
  for(int k = 0; k < 5; k++)
    cout << is.pop() << endl;
} ///:~