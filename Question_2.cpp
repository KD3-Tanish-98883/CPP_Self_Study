#include<iostream>
using namespace std;

inline void factorial(int n){
    int fact = 1;
    for(int i=1; i<=n ; i++){
        fact= fact*i;
    }
    cout<<"Factorial of "<<n<<" = "<<fact<<endl;
}

inline void power(int base, int pow){
    int res = 1;
    for (int i=1 ; i<= pow; i++){
        res *= base;
    }
    cout<<"Result = "<<res<<endl;
}

int main(){
    factorial(5);
    power(2,3);
}
