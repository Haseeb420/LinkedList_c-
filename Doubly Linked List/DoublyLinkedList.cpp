#include"DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
	head = tail = NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
	Node* temp = head;
	head = head->next;
	while (head)
	{
		delete temp;
		temp = head;
		head = head->next;
	}
	temp=tail=head = NULL;
}
bool DoublyLinkedList::addNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	temp->previous = NULL;
	if (!head) //if head is NUll or Linked list is empty
	{
		head= temp;
		tail = temp;
		head->previous = tail;
		tail->next = head;
		temp = NULL;
		return true;
	}
	else
	{
		temp->previous = tail;
		tail->next = temp;
		tail = tail->next;
		temp = NULL;
		return true;
	}
	return false;
}
void DoublyLinkedList::displayList()
{
	if (!head)
	{
		cout << "******Linked List does not Exit************\n";
	}
	else
	{
		Node* temp = head;
	while (temp) //while temp id not NULL
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	}
}
void DoublyLinkedList::displayFromTail()
{
	if (!tail)
	{
		cout << "**********Linked List Does not exist************\n";
	}
	else
	{
		Node* temp = tail;
		while (temp) //while temp is not null
		{
			cout << temp->data << endl;
			temp = temp->previous;
		}
	}
}