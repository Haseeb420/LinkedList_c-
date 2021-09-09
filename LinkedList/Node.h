#pragma once
#include<iostream>

using namespace std;

class LinkedList;
class Node        //node used to store data
{
	int data;
	Node* next;
public:
	friend class LinkedList; //to give directly acces to class Linked List
};
