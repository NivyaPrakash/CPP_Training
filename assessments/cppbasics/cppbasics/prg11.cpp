//Write a Program to Remove All Characters From a String Except Alphabets
#include<iostream>
#include<cstring>  
#define MAX 100
using namespace std;

int main()
{
    char str[MAX];
    int j = 0;
    cout << "Enter a string: " << endl;
    cin.getline(str, MAX);  

    char str2[MAX] = { 0 };  

    
    for (int i = 0; i < strlen(str); i++)
    {

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str2[j++] = str[i];  
        }
    }

    str2[j] = '\0';  
    cout << "String with only alphabets: " << str2 << endl; 
    return 0;
}
