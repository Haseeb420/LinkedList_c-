#include"LinkedList.h"


LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
}
LinkedList::~LinkedList()
{
	Node* temp = head;
	head = head->next;
	while (head != NULL)
	{
		delete temp;
		temp = head;
		head = head->next;
	}
	temp = NULL;
}
bool LinkedList::insertNode(int element)
{
	Node* temp = new Node();
	temp->data = element;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
		return true;
	}
	else
	{
		tail->next = temp;
		tail = tail->next;
		temp = NULL;
		return true;
	}
	return false;
}
bool LinkedList::insertAtStart(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->next = head;
	head = temp;
	temp = NULL;
	return true;
}
bool LinkedList::insertAtNTHNode(int index, int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
		return true;
	}
	else
	{
		int count = 1;
		Node* temp1;
		temp1 = head;
		while (temp1 != NULL)
		{
			if (count == index-1)
			{
				temp->next = temp1->next;
				temp1->next = temp;
				temp1 = temp1->next;
				temp = NULL;
				temp1 = NULL;
				return true;
			}
			count++;
			temp1 = temp1->next;
		}

	}
	return false;
}
bool LinkedList::deleteNthNode(int index)
{
	if (head == NULL)
	{
		cout << "*********List is Empty******** \n";
		return 0;
	}
	else
	{
		int count = 1;
		Node* temp;
		temp = head;
		while (temp != NULL)
		{
			if (count == index - 1 || index==0)
			{
				Node* remove = temp->next;
				temp->next = remove->next;
				delete remove;
				return true;
			}
			count++;
			temp = temp->next;
		}
		return false;
	}
}
int LinkedList::count()
{
	if (head == NULL)
	{
		cout << "*********List is Empty******** \n";
		return 0;
	}
	else
	{
		int count = 0;
		Node* temp;
		temp = head;
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}
}
void LinkedList::display()
{
	if (head == NULL)
	{
		cout << "*********List is Empty******** \n";
	}
	else
	{
		Node* temp;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
}
void LinkedList::sortLinkedList()
{
	
	for (Node* temp1 = head; temp1 != NULL; temp1 = temp1->next)
	{
		for (Node* temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
		{
			if (temp1->data > temp2->data)
			{
				int small = temp2->data;
				temp2->data = temp1->data;
				temp1->data = small;
			}
		}
	}
}