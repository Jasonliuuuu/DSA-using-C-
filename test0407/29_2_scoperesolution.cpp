// please infer the 29 template
// this document is going to explain the meaining and function of "Scope resolution"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Arithmetic {
private:
    int a; 
    int b; 

public:
    Arithmetic (int a, int b); 
    int add(); 
    int sub(); 
}; 

    Arithmetic::Arithmetic (int a, int b){
        this -> a = a; 
        // the reason we use this arrow is that to tell the compiler that this a is going to be the parameter in the class. This is a pointer to the current in C++
        this -> b = b; 
    } ;

    int Arithmetic::add(){
        int c ; 
        c = a + b; 
    
        return c; 
    }
    int Arithmetic::sub(){
        int c; 
        c = a-b; 
        return c; 
    }


int main(){
    Arithmetic A (10,5); 
    cout << "Add: " << A.add() << endl; 
    cout << "Sub: " << A.sub() << endl; 

    return 0; 
}
