#include<iostream>
using namespace std;

int main(){
    int marks[25]= {7,5,2,1,3};
    int n = sizeof(marks) / sizeof(int);

    for(int i=0; i<n;i++){
        cout<<marks[i];"";
    }
    cout<<endl;
    return 0;

}