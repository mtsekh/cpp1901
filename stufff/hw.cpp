#include <iostream>
#include <string>
#include <limits>
#include <climits>

using namespace std;

int main(){
    string data;
    int a;
    cout << "enter type of data." << endl;
    cin >> data;
    if (data == "int") {
        cout << "min: " <<numeric_limits<int>::min() <<", max: " <<numeric_limits<int>::max() << endl;
    }
    else if (data == "bool") {
        cout << "min: " <<numeric_limits<bool>::min() <<", max: " <<numeric_limits<bool>::max()<< endl;
    }
    else if (data == "float") {
        cout <<"min: " <<numeric_limits<float>::min() <<", max: " <<numeric_limits<float>::max()<< endl;
    }
    else if (data == "double"){
        cout << "min: " <<numeric_limits<double>::min() <<", max: " <<numeric_limits<double>::max() << endl;
    }

    else if (data == "char") {
        cout << "min: " << CHAR_MIN <<", max: " << CHAR_MAX << endl;
    }
    else {
        cout << "unknown data type" << endl;
    }


    cout << "Bye-bye";
    return 0;
}