#include <iostream>
#include <string>
using namespace std;

class Car {
    string name;
    string color;

    public:

    Car(){

    }
    void start(){
        cout <<" car has started..\n";

    }
    void stop (){
        cout << "car has stopped\n";
    }
};
int main(){
Car c1;
    return 0;

}