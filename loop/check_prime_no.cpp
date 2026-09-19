#include<iostream>
using namespace std;

int main(){
    int n = 9;
    bool isPrime = true;

    for(int i=2; i<=n-1;i++){
        if(n% i==0){
            isPrime = false;
            break;

        }
    }
    
    if(isPrime == true){
        cout<<"number is Prime"<< endl;
    }else{
        cout <<"number is NOT Prime"<<endl;
    }

    return 0;
}
