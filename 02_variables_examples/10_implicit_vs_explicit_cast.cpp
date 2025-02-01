// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    int i;
    char c = 'A';
    i = c;                      // implicit cast may not be obvious (dangerous)
    c = i;                      // implicit cast may not be obvious (dangerous)

    cout << i << "\n";
    cout << c << "\n";

    i = static_cast<int>(c);    // explicit cast is obvious (better)
    c = static_cast<char>(i);   // explicit cast is obvious (better)

    cout << i << "\n";
    cout << c << "\n";

    cout << endl;
    return 0;
}