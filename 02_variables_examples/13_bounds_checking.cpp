// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // indexes: 01234
    string s = "Hello"; 

    cout << s.length() << "\n\n";   // print the number of characters in a string

    cout << s[100] << "\n";         // read from memory outside of the string (data is garbage)
    s[-30] = 'A';                   // write to memory location outside of the string (memory corruption)

    cout << endl;
    return 0;
}