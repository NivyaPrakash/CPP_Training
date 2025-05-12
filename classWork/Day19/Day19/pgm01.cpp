/*array is  collection of similar datatype to perforn a task.
pointer-special variable.it can hold address of another variable.
it can point a datatype.it doesnt belong any kind od datatype.
more efficient in handlin the data table.
they increase the execute speed
the use of pointer array to character strings results in saving a data storage space in m/y
4 type-1.wild 2.generic or void 3.dangling  4.null ptr
int *ptr;  wild ptr
ptr=nullptr;  nullpointer
void *ptr;   generic -it is pointing nothing ptr-class or float or int...
ptr-store the address of another vaiable
int a=10; a->10->2000
int *ptr;

int a=10;--------a->10->4byte
char ch='A';----------ch->'A'->1byte

what is the value of null or nullptr-(void *)0;
int* ptr1=(void* )0=> int* ptr=nullptr;


can not convet char* to int* in assignment;

*/


#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	char ch = 'A';
	float f = 10.5;
	int* ptr=nullptr;
	printf( "\nAddress of a=%u and Its value=%d\n" ,&a,a);
	printf("\nAddress of ch=%u and Its value=%c\n", &ch, ch);
	printf("\nAddress of f=%u and Its value=%f\n", &f, f);
	printf("\nAddress of ptr=%u and Its value=%u\n", &ptr, ptr);
	a = 10;
	ptr = &a;
	printf("\nAddress of ptr=%u and Its value=%u\n", &ptr, ptr);

	printf("\n ptr is pointing to =%u", ptr);
	//co (ptr)-&a
	//co(co(ptr))-10value of a dereferencing the pointer
	printf("\n % u is having the value stored as = % u\n", ptr, *ptr);


	return 0;
}