#include<iostream>
using namespce std;
int maoin(){

    int main(){
        int a =5;
        int *ptr = &a;

        cout << ptr << "\n";
        ptr ++;
        cout<< ptr<<"\n";
        ptr --;
        cout << ptr << "\n"
        return 0;
    }
}