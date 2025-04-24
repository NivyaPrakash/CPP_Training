#include<iostream>
using namespace std;
int main(){
    int x=10;
    int a=x;
    int b=x+=1;
    int c=x-=1;
    int d=x*=2;
    int e=x/=2;
    int f=x%=2;
    int g=x&=3;
    int h=x|=3;
    int i=x^=2;
    int j=x>>=2;
    int k=x<<=2;
    cout<<"a:"<<a<<"\n";
     cout<<"b:"<<b<<"\n";
      cout<<"c:"<<c<<"\n";
       cout<<"d:"<<d<<"\n";
        cout<<"e:"<<e<<"\n";
         cout<<"f:"<<f<<"\n";
          cout<<"g:"<<g<<"\n";
           cout<<"h:"<<h<<"\n";
            cout<<"i:"<<i<<"\n";
             cout<<"j:"<<j<<"\n";
              cout<<"k:"<<k<<"\n";
}