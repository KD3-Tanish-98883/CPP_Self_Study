#include <iostream>
using namespace std;

class Product{
    protected:
    string title;
    double price;

    public:
    virtual void accept() = 0;
    virtual void display() = 0;

    virtual ~Product()
    {   }
};

class Book : public Product{
    private:
    int pages;

    public:
    void accept(){
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter pages: ";
        cin >> pages;
    }

    void display(){
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Product{
    private:
    double playtime;

    public:
    void accept(){
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter playtime: ";
        cin >> playtime;
    }

    void display(){
        cout << "Playtime: " << playtime << " minutes" << endl;
    }
};


int main(){
    Product **arr = new Product*[5];
    int choice;
    for (int i = 0; i < 5; i++){
        cout << "\n1. Book, 2. Tape, Enter choice: ";
        cin >> choice;

        switch (choice){
        case 1:
            arr[i] = new Book;
            arr[i]->accept();
            break;

        case 2:
            arr[i] = new Tape;
            arr[i]->accept();
            break;

        default:
            cout << "Invalid choice!" << endl;
            i--;
            break;
        }
    }

    for (int i = 0; i < 5; i++){
        arr[i]->display();
    }

    for (int i = 0; i < 5; i++){
        delete arr[i];
    }
    delete[] arr;
    return 0;
}