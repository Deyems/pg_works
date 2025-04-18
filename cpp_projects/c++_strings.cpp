#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName = "John";
    string lastName = "Motunde";
    string fullName = firstName + " " + lastName;

    string num = "20";
    string num2 = "30";
    string getSize = "Abcdef go home to learn his lessons!";
    getSize[3] = 'Y';
    cout << fullName << endl;
    cout << num + num2 << " summing string and integer " << getSize.length() << " combines length and size " << getSize.size() << endl;
    cout << getSize << " The chars in position is after changing position 3 " << endl;
    cout << getSize[getSize.length() - 1] << " The char at last position is " << endl;
    return 0;
}

//Error encountered when adding string and integer
// c++_strings.cpp:11:12: error: no viable conversion from 'int' to 'string' (aka 'basic_string<char>')

// member reference base type 'const char[28]' is not a structure or union
// cout << num + num2 << " summing string and integer".length() << endl;
