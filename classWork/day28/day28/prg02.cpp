#include<iostream>
using namespace std;
#define MAX 5


int top = -1;
int bottom = -1;
int push(int);
int pop();
void display();
int arr[MAX];

int main()
{
	push(10);
	push(20);
	push(30);
	display();
	pop();
	display();
}

int push(int v)
{
	if (top == MAX-1)
	{
		cout << "Stack full";
		return 0;
	}
	top++;
	arr[top] = v;
	
	return 0;
}


int pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty";
		return 0;
	}
	cout << arr[top] << "got popped out" << endl;
	top--;
	return 0;
}


void display()
{
	if (bottom == top)
	{
		cout << "stack full";
		return;
	}
	for (int i = top;i >= 0;i--)
	
		cout << arr[i];
	cout << endl;
}