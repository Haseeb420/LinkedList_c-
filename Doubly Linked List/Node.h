#pragma once
#include<iostream>
using namespace std;
class DoublyLinkedList;
class Node 
{
public:
	friend class DoublyLinkedList;
private:
	int data;
	Node* previous, * next;
};