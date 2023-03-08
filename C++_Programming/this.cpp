#include<iostream>
using namespace std;

class Employ{
    public:
    int id;
    float salary;
    Employ(int id, float salary){
        this->id=id;
        this->salary = salary;
    }
    
    void print(){
        cout<<"Values are "<<id<<" "<<salary;
    }
};
int main(){
    Employ obj = Employ(1, 123.45);
    obj.print();
    return 0;
}