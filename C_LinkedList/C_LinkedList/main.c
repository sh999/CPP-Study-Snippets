#include<stdlib.h>
struct node {
    int value;  // Value held in the node
    struct node *nextNode;  // Will point to next element
};

int main(){
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    head->value = 7;
    second->value = 8;
    third->value = 9;
    head->nextNode = second;
    second->nextNode = third;
    third->nextNode = NULL;
}