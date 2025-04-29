/*array declaration - int name[3] ;
in intel - allocation of m / y towards variable will start from left to right
c->b->a

int a;
int b;
int c;the allocation starts from bottom to top

declaration syntax
declaration with initialization
int a[3]={101,102,103}; 3-capacity,no of elements present in the array.


int a[3];
a[0]=101;
a[1]=102;
a[2]=103;

printing
cout<<a[0]; print the value stored ath a[0] address


*/


#include<iostream>
using namespace std;
int main()
{
	int arr[3];//declaration of array
	cout << "size of arr:" << sizeof(arr) << endl;
	cout << "Address of a[0]" << &arr[0] << endl;
	cout << "Address of a[1]" << &arr[1]<< endl;
	cout << "Address of a[2]" << &arr[2] << endl;

	printf("Address of arr[0]: %u\n", &arr[0]);
	printf("Address of arr[1]: %u\n", &arr[1]);
	printf("Address of arr[2]: %u\n", &arr[2]);
}
