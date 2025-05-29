#include<iostream>
using namespace std;
#define MAX 5

class que
{
private:
	int arr[MAX];
	int rear = 0;
	int front = 0;
public:

	int enqueue(int v)
	{
		if (rear == MAX)
		{
			cout << "Queue is full" << endl;
			return EXIT_SUCCESS;
		}
		arr[rear] = v;
		rear++;

		return EXIT_SUCCESS;
	}



	int dequeue()
	{
		if ((rear == front) || (front == MAX))
		{
			cout << "Queue is empty" << endl;
			rear = 0;
			front = 0;
			return EXIT_SUCCESS;
		}
		cout << arr[front] << " got dequeued" << endl;
		front++;

		return EXIT_SUCCESS;
	}


	void display()
	{
		if ((rear == front) || (front == MAX))
		{
			cout << "Queue is empty" << endl;
			rear = 0;
			front = 0;
			return;
		}
		cout << "Queue elements are\n";
		for (int i = front; i < rear;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
};


int main()
{
	que q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.display();


	return 0;
}