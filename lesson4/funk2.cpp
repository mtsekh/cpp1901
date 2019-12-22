#include <iostream>
using namespace std;
int get_value_from_user(){
    cout <<"enter intrger "<< endl;
    int x =0;
    cin >> x ;
    return x ;
}
int main(void){
    int a=  get_value_from_user();
    int b = get_value_from_user();
    cout <<"first + second = "<< a + b <<endl;
    return 0;
}