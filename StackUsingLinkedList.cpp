#include <iostream>
using namespace std;

class Node
{
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

class Stack
{
private:
	Node* top;
public:
	Stack() {
		top = NULL;
	}
};