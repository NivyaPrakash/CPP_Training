#include <iostream>
#include <thread>
using namespace std;
void backgroundTask(int &x) {
    x = 101;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Background task done." << std::endl;
}

int main() {
    int val = 100;
    cout << "original value:" << val << endl;
    std::thread t(backgroundTask,ref(val));
    t.detach(); // Main won't wait
    std::this_thread::sleep_for(std::chrono::seconds(5));
    cout << "modified value:" << val << endl;
    std::cout << "Main is not blocked.\n";
    
    return 0;
}