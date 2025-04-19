#include <iostream>
// #include <string>
using namespace std;

int main(){
    string word = "Above only, below never";
    string output = "Enter your first name ";
    string firstname;
    cout << output;
    getline(cin, firstname);
    // cin >> firstname;
    cout << "Your first name is " << firstname << " and you are " << word << endl;
    return 0;
}