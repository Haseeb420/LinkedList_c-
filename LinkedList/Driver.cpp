#include"LinkedList.h"

int main()
{
	int index;    //to inert data at nth node
	LinkedList list;
	list.insertNode(4);
	list.insertNode(5);
	list.insertNode(6);
	list.insertNode(8);
	list.insertAtStart(3);
	list.insertNode(7);
	cout << "This is your Linked List : \n";
	list.display();
	cout << endl;
	cout << "Where are you want insert data ";
	cin >> index;
	while (index <= 0 || index > list.count())
	{
		cout << "****Out of Bound*****\n";
		cout << "Your index should be under " << list.count() << endl;
		cout << "Where are you want insert data ";
		cin >> index;
	}
	list.insertAtNTHNode(index, 22);
	list.display();
	cout << "Where are you want insert data ";
	cin >> index;
	while (index <= 0 || index > list.count())
	{
		cout << "****Out of Bound*****\n";
		cout << "Your index should be under " << list.count() << endl;
		cout << "Where are you want insert data ";
		cin >> index;
	}
	list.deleteNthNode(index);
	list.sortLinkedList();
	list.display();
	cout << "sorted linked list\n ";
	list.sortLinkedList();
	list.display();
	return 0;
}