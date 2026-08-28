#include<iostream>
using namespace std;

class Laptop{

    private:
    int brandId;
    int price;

    public:
    Laptop():brandId(1),price(5000){
        cout<<"Laptop Constructor Called"<<endl;
    }
    ~Laptop(){
        cout<<"Laptop Destructor Called"<<endl;
    }

    void display(){
        cout<<"BrandId = "<<brandId<<endl;
        cout<<"Price = "<<price<<endl;
    }
};

int main(){
    Laptop l1;
    l1.display();
}
