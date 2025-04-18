#include <iostream>
#include <string>
using namespace std;

int main(){
    // float f1 = 35e3;
    // double d1 = 12E4;
    // bool isCodingEasy = true;
    // string worder = "Hello there!";

    // cout << f1 << " float \n";
    // cout << d1 << " double \n";
    // cout << isCodingEasy << " boolean \n";
    // cout << worder << " type of string here\n";

    char currency = '$';
    int items = 45;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    cout << "Num of items " << items << endl;
    cout << "Cost per item " << currency << cost_per_item << endl;
    cout << "Total cost " << total_cost << endl;
    return 0;
}
