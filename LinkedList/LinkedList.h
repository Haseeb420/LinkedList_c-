#include"Node.h"
class LinkedList
{
	Node* head, * tail;
public:
	LinkedList();
	~LinkedList();
	bool insertNode(int);
	bool insertAtStart(int);
	bool insertAtNTHNode(int, int);
	bool deleteNthNode(int);
	void sortLinkedList();
	int count();
	void display();
};