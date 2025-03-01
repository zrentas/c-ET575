// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n, sum = 0;                 // initialize sum to 0
    cout << "Enter a value: ";
    cin >> n;

                                    // if n == 4:
    for(int i=1; i<=n; ++i) {       // i    :   1           2           3           4
        sum += i;                   //          0+1         1+2         3+3         6+4
    }                               // sum  :   1           3           6           10

    cout << "The summation from 1 to " << n << " inclusive is " << sum << "\n";

    cout << endl;
    return 0;
}