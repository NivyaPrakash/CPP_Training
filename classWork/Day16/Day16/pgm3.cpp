#include<iostream>
using namespace std;
int main()
{
    int n, i, temp;;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int a[100],j;
    cout << "Enter elements of array:" << endl;
    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (i = 0;i < n;i++)
    {
        for ( j = i+1;j < n;j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j;k < n;k++)
                {
                    a[k] = a[k+ 1];
                    
               
                }
                j--;
                n--;

            }
        }
    }
    for (i = 0;i < n;i++)
    {
        cout << a[i];
    }
}