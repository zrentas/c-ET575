// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x=1;                    // the value of x does not determine if the loop runs

                                // repeat exactly 5 times
    for(int i=0; i<5; ++i) {    //  i   :    0           1           2           3           4
        cout << "Enter x: ";    //           Enter x:    Enter x:    Enter x:    Enter x:    Enter x:
        cin >> x;                            
    }

    cout << endl;
    return 0;
}