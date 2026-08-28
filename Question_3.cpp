#include<iostream>
using namespace std;

class Students
{
    private:
    int rollNo;
    double marks;
    
    public:

    int getRollNo(){
        return this->rollNo;
    }

    double getMarks(){
        return this->marks;
    }

    void setRollNo(int rollno){
        this->rollNo = rollNo;
    }

    void setMinute(double marks){
        this->marks = marks;
    }

    void acceptRecords(){
        cout<<"Enter the roll no. and marks of student"<<endl;
        cin>>rollNo>>marks;
    }

    void displayRecords(){
        cout<<rollNo<<" "<<marks<<endl;
    }

    void displayHighestMarks(double hmarks){
        cout<<hmarks;
    }
};

int main(){
    int n;
    cout<<"Enter the no. of objects"<<endl;
    cin>>n;

    Students *arr = new Students[n];

    for (int index =0 ; index < n; index++){
        arr[index].acceptRecords();
    }

    for (int index =0 ; index < n; index++){
        arr[index].displayRecords();
    }

    int max=0;

    for(int index = 0; index< n; index++){
        if(arr[index].getMarks() > max){
            max = arr[index].getMarks();
        }
    }
    Students stu;
    stu.displayHighestMarks(max);

}


