#include <iostream>
using namespace std;

void displayNum(int num, double bomb){
    cout << "The int num is " << num << endl;
    cout << "The double num " << bomb << endl;

}

int main(){
    int num1 = 8;
    double num2 = 3.99;

    displayNum(num1, num2);
    cout << endl;
    return 0;
}
