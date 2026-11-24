#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    cout << "Max Mark: " << findMax(85, 92) << endl;
    cout << "Max Price: " << findMax(499.99, 450.50) << endl;
    cout << "Max Reading: " << findMax(36.7f, 37.1f) << endl;

    return 0;
}
