#include<iostream>
using namespace std;

int f1(int);              
int f2(int, int);         

int main()
{
    int n;
    cout << "Enter  limit: ";
    cin >> n;

   

    for (int i = 1; i <= n; i++) {
        int count = f1(i);         
        int res = f2(count, i);    
        if (res == i) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}


int f1(int n)
{
    int count = 0;
    while (n > 0)
    {
       // n = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

int f2(int count, int n)
{
    int sum = 0, power=1;
    int temp = n;
    while (n > 0)
    {
        int d = n % 10;
        
        power = pow(d, count);
        sum += power;
        n = n / 10;
    }
    return sum;
}
