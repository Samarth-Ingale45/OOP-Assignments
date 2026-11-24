#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int empID1 = 101, empID2 = 202;
    cout << "Before swap (Employee IDs): " << empID1 << ", " << empID2 << endl;
    swapValues(empID1, empID2);
    cout << "After swap (Employee IDs): " << empID1 << ", " << empID2 << "\n\n";

    string room1 = "A-101", room2 = "B-205";
    cout << "Before swap (Room Numbers): " << room1 << ", " << room2 << endl;
    swapValues(room1, room2);
    cout << "After swap (Room Numbers): " << room1 << ", " << room2 << "\n\n";

    char priority1 = 'H', priority2 = 'L';
    cout << "Before swap (Priorities): " << priority1 << ", " << priority2 << endl;
    swapValues(priority1, priority2);
    cout << "After swap (Priorities): " << priority1 << ", " << priority2 << endl;

    return 0;
}
