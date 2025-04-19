#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName = "John";
    string lastName = "Motunde";
    string fullName = firstName + " " + lastName;

    string num = "20";
    string num2 = "30";
    string myLongText = "Abcdef go home to learn his lessons!";
    myLongText[3] = 'Y';
    cout << fullName << endl;
    cout << num + num2 << " summing string and integer " << myLongText.length() << " combines length and size " << myLongText.size() << endl;
    cout << myLongText << " The chars in position is after changing position 3 " << endl;
    cout << myLongText[myLongText.length() - 1] << " The char at last position is " << endl;
    cout << myLongText.at(7) << " printing at position 7 in long text" << endl;
    return 0;
}

//Error encountered when adding string and integer
// c++_strings.cpp:11:12: error: no viable conversion from 'int' to 'string' (aka 'basic_string<char>')

// member reference base type 'const char[28]' is not a structure or union
// cout << num + num2 << " summing string and integer".length() << endl;
