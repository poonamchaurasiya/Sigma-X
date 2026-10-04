#include<iostream>
using namespace std;

int sum(int a,int b=1){
    int sum = a+b;
    return sum;

}
int diff(int a, int b){
    int diff= a-b;
    return diff;

}

int main(){
    int s = sum(2,5);
    cout<< "sum="<<s<<endl;
    return 0;
}