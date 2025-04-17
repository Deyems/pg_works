#include <iostream>
using namespace std;

int main(){
    const int num = 89;
    // num = 90; - you can't reassign a const.
    cout << "check const value override" << num << " for errors" << endl;

    int width, height, area;
    cout << "Enter the width ";
    cin >> width;
    cout << "Enter the height ";
    cin >> height;
    area = width * height;
    cout << "The area gotten from input width & height is " << area << endl;
    return 0;
}
