// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n, sum=0;                   // initialize sum to 0
    cout << "Enter a value: ";
    cin >> n;

                                    // if i == 6
    for(int i=1; i<=n; ++i) {       // i        :   1       2       3       4       5       6   
        if(i%2 == 0) { continue; }  // continue :           C               C               C    
        sum += i;                   //              0+1             1+3             4+5
    }                               // sum      :   1               4               9             

    cout << "The summation of all ODD values from 1 to " << n << " inclusive is " << sum << "\n";

    cout << endl;
    return 0;
}