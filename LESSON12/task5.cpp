#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int number = 10;
    int arr[number];
    int count = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<=count;i++){
        arr[i] = i;
        cout <<arr[i]*2<<endl;
    }
    for(int i = 0;i<=count;i++){
        arr[i] = i;
        cout <<arr[i]*0.5<<endl;
    }
    return 0;
}