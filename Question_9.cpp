#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual void work() = 0; // Abstract method - Pure virtual function
};

class Student : public Person{
    private:
    float marks;

    public:
    Student(string name, int age, float marks): Person(name, age){
        this->marks = marks;
    }

    void study(){
        cout << name << " is studying." << endl;
    }

    void work(){
        cout << name << " is studying as a student." << endl;
    }

    void display(){
        Person::display();
        cout << "Marks: " << marks << endl;
    }
};

class Teacher : public Person
{
    private:
    double salary;

    public:
    Teacher(string name, int age, double salary): Person(name, age){
        this->salary = salary;
    }

    void teach(){
        cout << name << " is teaching." << endl;
    }

    void work(){
        cout << name << " is teaching as a teacher." << endl;
    }

    void display(){
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};


int main()
{
    Student s("Tanish", 22, 85.5);
    Teacher t("Rahul", 40, 75000);

    cout << " Student : " << endl;
    s.display();
    s.study();
    cout << " Teacher : " << endl;
    t.display();
    t.teach();
    
    Person *ptr;// Run-time polymorphism
    ptr = &s;
    ptr->work();
    ptr = &t;
    ptr->work();
    return 0;
}