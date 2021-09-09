#include<iostream>

using namespace std;
template<class T>
class LinkedList;
template<class T>
class Node        //node used to store data
{
	T data;
	Node* next;
public:
	template <class T> friend class LinkedList; //to give directly acces to class Linked List
};
template<class T>
class LinkedList
{
	Node<T>* head;
	Node<T> * tail;
public:
	LinkedList();
	~LinkedList();
	bool insertNode(T);
	void display();
};
template<class T>
LinkedList<T>::LinkedList()
{
	head = NULL;
	tail = NULL;
}
template<class T>
LinkedList<T>::~LinkedList()
{
	Node<T>* temp = head;
	head = head->next;
	while (head != NULL)
	{
		delete temp;
		temp = head;
		head = head->next;
	}
	temp = NULL;
}
template<class T>
bool LinkedList<T>::insertNode(T element)
{
	Node<T>* temp = new Node<T>();
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
template<class T>
void LinkedList<T>::display()
{
	if (head == NULL)
	{
		cout << "*********List is Empty******** \n";
	}
	else
	{
		Node<T>* temp;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
}
int main()
{
	LinkedList<int> list;
	list.insertNode(4);
	list.insertNode(5);
	list.insertNode(6);
	list.insertNode(8);
	list.insertNode(7);
	list.display();
	return 0;
}