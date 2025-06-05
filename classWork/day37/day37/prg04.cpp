#include <iostream>
#include<initializer_list>
using namespace std;
#include <array>
template<typename T,size_t N>
class myArray
{
	T* arr;
	
public:
	myArray(std::initializer_list<T> list)

	{
		if (list.size() > N)
			throw length_error("Too many arguments");
		this->arr = new T[N];
		cout << N << endl;
		int i = 0;
		for (const T& val : list)
		{
			arr[i++] = val;
		}
		for (;i < N;i++)
			arr[i] = T{};
	}
	
	void display()
	{
		cout << "Array elements: ";
		for (auto x : arr) 
			cout << x << " ";
		cout << "\n";
	
	}
};

int main()
{
	try {
		myArray<int, 5>arr = { 1,2,3 };
		arr.display();
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	
}
