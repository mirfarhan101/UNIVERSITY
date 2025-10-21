#include <iostream>
using namespace std;
  
class Car{
    private: 
        string brand;
        string model;
        int fuel;
        

    public:
    Car(){

    }

    Car(string brand, string model, int fuel){
        setBrand(brand);
        setModel(model);
        setFuel(fuel);
    }

    void setBrand(string brand){
        this -> brand = brand;
    }

    string getBrand(){
        return brand;
    }

    void setModel(string model){
       this -> model = model;
    }

    string getModel(){
        return model;
    }

    void setFuel(int fuel){
        this -> fuel = fuel;
    }

    int getFuel(){
        return fuel;
    }

};

class Employee{
    protected:
        string name;
        int age;
        string department;

    public:

        Employee(){
            setName("NA");
            setAge(0);
            setDepartment("general");

        }

        Employee(string name, int age, string department){
            setName(name);
            setAge(age);
            setDepartment(department);
        }

        void setName(string name){
            this -> name = name;
        }

        void setAge(int age){
            this -> age = age;
        }

        void setDepartment(string department){
            this -> department = department;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        string getDepartment(){
            return department;
        }

    virtual void work() = 0;
};

class Developer : public Employee{

    public:
    string experties;

    Developer(string name, int age, string department, string experties) : Employee(name, age , department){
        this -> experties = experties;

    }
    void work() override {
        cout << name << " is programming in " << experties << endl;
    }

};

class Teacher : public Employee{

    public:
    string subject;

    Teacher(string name, int age, string department, string subject) : Employee(name, age , department){
        this -> subject = subject;

    }
    void work(){
        cout << name << " is teaches in " << subject << endl;
    }
    // void work(){
    //     cout << name << " is programming in " << experties << endl;
    // }

};


int main(){

    // Car c1("ford", "mustand", 50);
    // cout << c1.getBrand() << " " << c1.getModel() << " " << c1.getFuel() << endl;

    // Employee e1;
    // cout << e1.getName() << " " << e1.getAge() << " " << e1.getDepartment() << endl;
    
    // Employee e2("farhan", 22, "MCA");
    // cout << e2.getName() << " " << e2.getAge() << " " << e2.getDepartment()<< " " << endl;
    // e2.work();
    Developer d1("rahil", 23, "BCA", "python");
    cout << d1.getName() << " " << d1.getAge() << " " << d1.getDepartment() << " " <<  endl;
    d1.work();
    Teacher t1("qasim", 50, "networking", "math");
    cout << t1.getName() << " " << t1.getAge() << " " << t1.getDepartment() << " " <<  endl;
    t1.work();

    Employee* e1 = &d1;
    cout << e1->getName() << " " << e1->getAge() << " " << e1->getDepartment() << endl;
    e1->work();
return 0;
}