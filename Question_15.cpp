#include<iostream>
using namespace std;

 class NegativeMarksException
    {
    private:        
    string message;

    public:
    NegativeMarksException(string message){
            this->message = message;
        }

    string getMessage(){
            return message;
        }
    };


namespace college{
    class Student{
        private:
        string stuname;
        int rollNo;
        
        public:
        Student() :stuname(""), rollNo(0)
        {   }

        Student(string stuname, int rollNo){
            this->stuname = stuname;
            this->rollNo = rollNo;
        }

        void setName(string stuname){
            this->stuname = stuname;
        }

        string getName(){
            return stuname;
        }

        void setRollNo(int rollNo){
            this->rollNo = rollNo;
        }

        int getRollNo(){
            return rollNo;
        }

        void display(){
            cout << "Student Name: " << stuname << endl;
            cout << "Roll No: " << rollNo << endl;
        }
    };

    class Teacher{
        private:
        string teacherName;
        string subject;

        public:
        Teacher(): teacherName(""), subject("")
        {   }

        Teacher(string teacherName, string subject)
        {
            this->teacherName = teacherName;
            this->subject = subject;
        }

        void setName(string teacherName)
        {
            this->teacherName = teacherName;
        }

        string getName()
        {
            return teacherName;
        }

        void setSubject(string subject)
        {
            this->subject = subject;
        }

        string getSubject()
        {
            return subject;
        }

        void display()
        {
            cout << "Teacher Name: " << teacherName << endl;
            cout << "Subject: " << subject << endl;
        }
    };
    
}

int main(){
    college::Student s1("Tanish", 101);
    college::Teacher t1("Rahul", "C++");
    cout << "Student Details:" << endl;
    s1.display();
    cout << "Teacher Details:" << endl;
    t1.display();
}