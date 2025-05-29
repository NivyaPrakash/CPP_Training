#include <iostream>
#include <cstdlib>

using namespace std;


class List
{
private:
	typedef struct node
	{
		int data;
		struct node* next;
	}NODE;
public:
	int dispMenu()
	{
		int ch;
		cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
		cout << "\t3. Display List\n\t4. Exit..\n\tChoice: ";
		cin >> ch;
		return ch;
	}

	int dispList(NODE* head)
	{
		cout << "\tList is " << endl;
		cout << "\t";
		while (head != NULL)
		{
			cout << head->data << " -> ";
			head = head->next;
		}
		cout << "NULL" << endl;
		return EXIT_SUCCESS;
	}

	NODE* addNodeEnd(NODE* head, NODE* nn)
	{
		NODE* temp = head;
		if (head == NULL) {
			head = nn;
			return head;
		}
		while (head->next != NULL)
			head = head->next;
		head->next = nn;
		head = temp;
		return head;
	}

	NODE* addNodeBeg(NODE* head, NODE* nn)
	{
		if (head == NULL)
		{
			head = nn;
			return head;
		}
		nn->next = head;
		head = nn;
		return head;
	}

	NODE* createNode()
	{
		NODE* nn = (NODE*)malloc(sizeof(NODE));
		cout << "Enter the value of node: ";
		cin >> nn->data;
		nn->next = NULL;
		return nn;
	}

};


int main()
{
	List L;
	NODE* head = NULL, * nn = NULL;
	int ch = 1;
	while (ch)
	{
		switch (L.dispMenu())
		{
		case 1:

			head = L.addNodeBeg(head, L.createNode());
			break;
		case 2:
			head = L.addNodeEnd(head, L.createNode());
			break;
		case 3:
			L.dispList(head);
			break;
		case 4:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}

	cout << "Exiting program...." << endl;
	return 0;
}
