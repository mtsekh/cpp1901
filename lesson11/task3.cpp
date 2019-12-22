#include <iostream>//библиотека

using namespace std;

int main(){
    #include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Russian");
    int a, b=0, k=1;
    cout<<"Введите число в десятичной системе ";
    cin>>a;
    int num;
    while (a)
    {
        b+=a%16*k;
        a/=16;
        k*=10;

    }
    cout<<"Число в шестнадцатеричной системе "<<b<<endl;



    system("pause");
    return 0;
}
}