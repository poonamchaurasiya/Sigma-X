#include<iostream>
#include <string>
using namespace std;

class Car {
    public:
    string name;
    string color;

    Car(string name,string color){
        this->name = name;
        this->color = color;
    }

};
int main(){
    Car c1("maruti 800","white");

    Car c2(c1);
    cout << c2.name << endl; //maruti800
    cout << c2.color << endl;//white
    return 0;
}