#include<iostream>
using namespace std ;
class student {
    string name ; 
    int age , balance ;

    public :
    
    student ( string name = "null" , int age = 18 , int balance = 1000){
        this -> name = name ; 
        this -> age = age ;
        this -> balance = balance ;
    }
    void display(){
        cout<<name <<endl <<age << endl << balance <<endl ;
    }
};
int main (){
    student umang ("Badmos");
    umang.display();
}
