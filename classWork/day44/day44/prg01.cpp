#include <iostream>
#include <thread>
using namespace std;
void greet()
{
    cout << "Hello world"<<endl;
}
void display(int x)
{
    cout << "x:" << x << endl;
}
void modifyx(int& x)
{
    x += 10;
}

void hello() {
    std::cout << "Hello from thread!\n";
}

typedef long long int ULL;
void printX(ULL x)
{
    for (int i = 0;i < x;i++)
        cout << i << endl;
}

int main() {
    /*
    std::thread t(hello);
    t.join();
    thread t1(greet);
    t1.join();
    cout << "end of pgm" << endl;
    thread t2(display, 100);
    t2.join();
    int val = 5;
    thread t3(display, ref(val));
    t3.join();
    cout <<"value:"<< val << endl;
    */

    thread t1(printX, 999999);
    thread t2(printX, 9999);
    t1.join();
    t2.join();
    return 0;
}