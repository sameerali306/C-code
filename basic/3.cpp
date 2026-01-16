#include <iostream>
using namespace std;

int main() {
    int names[] = {2, 3, 4, 6, 7, 9, 6, 5};

    for (int i : names) {
        cout << "The value is: " << i << endl;
    }

    return 0;
}