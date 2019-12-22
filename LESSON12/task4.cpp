#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int number = 10;
    int arr[number];
    cout << sizeof(arr) << endl;
    //char surname[20];
    //char name1[10] = {'v','l','a','d'};
    //char name2[10] = {'v','l','a','d','\0'};
    //char name3[] = "vlad";
    int count = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < count;i++){
        arr[i] = i;
        cout <<arr[i]<<endl;
    }
    return 0;
}