#pragma once
#include"Node.h"
class DoublyLinkedList
{
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	bool addNode(int);
	void displayList();
	void displayFromTail();
private:
	Node* head, *tail;
};


