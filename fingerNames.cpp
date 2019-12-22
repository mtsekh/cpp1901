#include <iostream>
//#include <string>

using namespace std;

int main(){
    int number;
    cout << "enter number of a finger." << endl;
    cin >> number;
    if(number == 1){
        cout << "it is thumb" << endl;
    }
    if(number == 2){
        cout << "it is point finger" << endl;
    }
    if(number == 3){
        cout << "it is middle finger" << endl;
    }
    if(number == 4){
        cout << "it is ring finger" << endl;
    }
    if(number == 5){
        cout << "it is little finger" << endl;
    }

}