#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int post = 0;
    int pre = 0;
    cout << "Initial values: \t\t\tpost = " << post << " pre = " << pre << "\n";
    post = a++;
    pre = ++b;
    cout << "After one postfix and prefix: \tpost = " << post << " pre = " << pre << "\n";
    post = a++;
    pre = ++b;
    cout << "After two postfix and prefix: \tpost = " << post << " pre = " << pre << "\n";
    system("Pause");
    return 0; 
}