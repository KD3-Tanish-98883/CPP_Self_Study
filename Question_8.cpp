#include <iostream>
using namespace std;

class Programmer{
    public:
    Programmer(){
        cout << "Programmer constructor called" << endl;
    }

    void work(){
        cout << "Programmer is working" << endl;
    }
};

class Teacher{
    public:
    Teacher(){
        cout << "Teacher constructor called" << endl;
    }

    void work(){
        cout << "Teacher is working" << endl;
    }
};

class ProgrammingTeacher : public Programmer, public Teacher{
    public:
    ProgrammingTeacher(){
        cout << "ProgrammingTeacher constructor called" << endl;
    }
};

int main(){
    ProgrammingTeacher pt;
    // pt.work();    // ambiguous
    pt.Programmer::work();//using scope resolution
    pt.Teacher::work();
}