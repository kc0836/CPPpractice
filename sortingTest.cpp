#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstddef>

using namespace std;

int main() {
    int x[5] = {15, 20, 5, 1, 65};
    int x_len = sizeof(x) / sizeof(int);

    cout << "Before sorting: ";
    for (size_t i = 0; i < x_len; i++) {
        cout << x[i] << ", ";
    }
    cout << endl;

    cout << "After ascending sorting: ";
    sort(x, x + x_len);
    for (size_t i = 0; i < x_len; i++) {
        cout << x[i] << ", ";
    }
    cout << endl;

    cout << "After descending sorting: ";
    reverse(x, x+x_len);
    for (size_t i=0; i < x_len; i++) {
        cout << x[i] << ",";
    }
    cout << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}