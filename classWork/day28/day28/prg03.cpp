#include<iostream>
using namespace std;
#define MAX 5

class stk
{
private:
	int top = -1;
	int bottom = -1;
public:
	int arr[MAX];
	
	
	int push(int v)
	{
		if (top == MAX - 1)
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
			cout << "stack empty";
			return 0;
		}
		cout << arr[top] << "Got popped";
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

	

};



int main()
{
	stk p;
	p.push(10);
	p.push(20);
	p.push(30);
	p.display();
	p.pop();
	p.display();
}