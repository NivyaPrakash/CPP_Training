#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

multiset<int, greater<int>> leader;
   

void add(int score)
   {
        leader.insert(score);
   }

void top3() 
{
    int shown = 0;
    for (int score : leader)
    {
        cout << score << " ";
        if (++shown == 3) break;
    }
    cout << endl;
}



void count(int score)
{
    cout << leader.count(score) << endl;
}

void remove(int score)
{
    leader.erase(score);
}


int main()
{
    add(50);
    add(70);
    add(90);
    add(70);

    count(70);  
    top3();          
    remove(70);
    top3();
}