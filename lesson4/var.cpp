#include <iostream>
using namespace std;
void doPrint(){
    int a = 4;
    cout <<"doPrint; " << a << endl;
}
int returnA(){
    cout <<"a" <<endl;
}


int main(){
    doPrint();
    int a = 0;
    cout << "main: " << a <<endl;
    dorint();
    return 0;
}