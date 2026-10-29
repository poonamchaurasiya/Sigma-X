#include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    float cgpa;

    public:
    void getPercentage(){
        cout << (cgpa * 10)<< "% \n";
    }
    // Setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }
    //Setters
    void getName(){
        return name;
    }
    void getCgpa(){
        return= cgpaVal;
    }



};

int main(){
    student s1;
    s1.setName("shradha");
    s1.setCgpa(9.1);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}
