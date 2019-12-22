#include <iostream>//библиотека

using namespace std;

int main(){
    int number;//переменная числа которое будет вводить пользователь
    cout << "enter number" << endl;//запрос числа у ползователя
    cin >> number;//значение числа из ввода пользователя
    if(number == 1){//проверка числа если ето единица
        cout << "you entered 1" << endl;
    }
    if(number == 0){//проверка числа если ето ноль
        cout << "you entered 0" << endl;
    }
    else{//если число не равно едиице или нулю вывести ерор
        cout << "ERROR" << endl;
    }
    return 0;
}