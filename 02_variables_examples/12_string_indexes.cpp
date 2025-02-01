// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // indexes: 01234
    string s = "Hello"; 

    cout << s.length() << "\n\n";   // print the number of characters in a string

    cout << s[0] << "\n";           // "Hello" has 5 characters, indexes run from 0 to length-1 (0 1 2 3 4)
    cout << s[1] << "\n";
    cout << s[2] << "\n";
    cout << s[3] << "\n";
    cout << s[4] << "\n\n";

    s[0] = 'J';                     // modify the first letter of the string

    cout << s << "\n";              // print "Jello"

    cout << endl;
    return 0;
}