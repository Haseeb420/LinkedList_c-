#include"DoublyLinkedList.h"
int main()
{
	DoublyLinkedList list;
	list.addNode(1);
	list.addNode(2);
	list.addNode(3);
	list.addNode(4);
	list.addNode(5);
	cout << "*****Display List in Normal Form*****\n";
	list.displayList();
	cout << "*****Display List in reverse order***\n";
	list.displayFromTail();
	return 0;
}

