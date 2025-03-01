// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string word;
    cout << "Enter a word: ";
    cin >> word;
                                                // if word == "hello"
    for(int i=0; i<=word.length()-1; ++i) {     //  i   :   0           1           2           3           4
        cout << word[i] << "\n";                //          print 'h'   print 'e'   print 'l'   print 'l'   print 'o'
    }

    cout << endl;
    return 0;
}