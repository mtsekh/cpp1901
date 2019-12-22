#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char name[15];
    int age= 0;
    cout << "enter your name:" <<endl;
    cin.getline(name,20);

    cout << "enter your age" << endl;
    cin >> age;



    return 0;
}