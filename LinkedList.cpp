
#include <iostream>

using namespace std;
class node
{
public:
	int number;
	node* nextNode = NULL;

	void appendElement(int newNumber)
	{
		node* Node = new node();
		Node->number = newNumber;
		nextNode = Node;

	}

};

void printList(node firstNode)
{
	node* currentNode = &firstNode;

	while (currentNode != NULL)
	{
		cout << currentNode->number << endl;
		currentNode = currentNode->nextNode;

	}
}
int listLength(node firstNode)
{
	node* currentNode = &firstNode;
	int counter = 0;
	while (currentNode != NULL)
	{
		counter++;
		currentNode = currentNode->nextNode;
	}
	return counter;
}

node reverseList(node firstNode)
{
	node* currentNode = &firstNode;
	node* previous = NULL;
	node* next = NULL;
	while (currentNode != NULL)
	{
		next = currentNode->nextNode;
		currentNode->nextNode = previous;
		previous = currentNode;
		currentNode = next;
	}
	return *previous;
}

int main()
{
	node firstNode;
	firstNode.number = 1;
	firstNode.appendElement(3);
	firstNode.nextNode->appendElement(5);
	firstNode.nextNode->nextNode->appendElement(6);
	firstNode.nextNode->nextNode->nextNode->appendElement(7);
	printList(firstNode);
	cout << "COUNTING!";
	cout << endl;
	cout<<listLength(firstNode);
	cout << endl;
	cout << "COUNTING!";
	cout << endl;
	cout<<listLength(*firstNode.nextNode);
	cout << "REVERSING LIST!" << endl;
	printList(reverseList(firstNode));


	return 0;
}

