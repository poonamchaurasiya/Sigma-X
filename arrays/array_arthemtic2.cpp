#include<iostream>
using namespace std ;

int main(){
    int a = 5;
    int *ptr = &a;
    cout << ptr << "\n";//1st
    cout <<(ptr+3)<<"\n";
    ptr--;
    cout<<ptr<<"\n";//3rd
    return 0;
}