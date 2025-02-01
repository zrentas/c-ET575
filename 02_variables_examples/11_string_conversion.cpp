// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;
                                                 
    string s1 = "5";
    int i = stoi(s1);                           // convert compatible string to integer

    string s2 = "5.05";
    float f = stof(s2);                         // convert compatible string to float

    string s3 = "A";
    char c = s3[0];                             // copy first (and only) character of temp into a character variable

    cout << i << " " << f << " " << c << "\n";

    cout << endl;
    return 0;
}