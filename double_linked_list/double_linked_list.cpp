#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;  
	string nama;  
	Node* next;  
	Node* prev;
};  

class DoubleLinkedList {  
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNode();
	bool search(int rollNo, Node** previous, Node** current);
	bool ddeleteNode(int rollNo);
	bool listEmpty();
	void ascending();
	void descending();
	void hapus();
	void searchData();
};

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
} 