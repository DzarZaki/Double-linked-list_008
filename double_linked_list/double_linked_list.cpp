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

void DoubleLinkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the rool number of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the  student: ";
	cin.ignore();
	getline(cin, nm);
	Node* newNode = new Node();
	newNode->noMhs = nim;
	newNode->nama = nm;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "\nDuplicate number not allowed" << endl;

			return;
		}
		newNode->next = START; 
		if (START != NULL) 
			START->prev = newNode; 
		newNode->prev = NULL; 
		START = newNode; 
		return;
	}
} 