#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    int result;
    cout<<"enter first number." <<endl;
    cin >> number1;
    cout<<"enter second number."<<endl;
    cin >> number2;
    cout<<"enter multiply of first and second numbers."<<endl;
    cin>>result;
    if(result == number1*number2){
        cout << "correct" << endl;
    }
    else{
        cout <<"wrong the awnser is:  " << number1*number2<< endl;
    }

}