#include <iostream>
using namespace std;

class student {
    //Properties
    string name ;
    float cgpa;
    //Methods 
    void getPercentage(){
        cout << (cgpa * 10)<< "% \n";
    }

};

int main (){
    student s1; // object
    cout << sizeof(s1)<< endl;
    return 0;
}