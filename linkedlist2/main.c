/*
linkedlist2.c
Following http://www.learn-c.org/en/Linked_lists
*/

// Node has numeric value and pointer to next Node
typedef struct Node {
	int val;
	struct Node * next;		// Points to next Node
} Node_t;					// Node_t is alias for struct Node


