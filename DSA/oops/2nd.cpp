#include<iostream>
using namespace std ;

class student {
    
    string name ; 
    int age , roll ; 
    string grade ; 

    public:
    void setname ( string n ){
        if(n.size() == 0){
            cout<<"Invalid name " << endl ;
        }
        name = n ;
    }
    void getname (){
        cout<<name <<endl ;
    }
    void setage( int a ){
        cout<< a << endl ;
    }
    void setroll(int r){
        roll = r ;
    }
    int getroll( int r ){
        return  r ;
    }
    void setgrade ( string s ){
        grade = s ;
    }
    string getgrade (int pin){

        if (pin == 123){
            return grade ;
        }
        return " ";
    }
};


int main (){
    
    student s1 ;
    s1.setname ("Umang");
    s1.getname ();
    s1.setage(18);
    s1.setgrade("B+");
    cout<<s1.getgrade(123)<<endl ;
    cout<< s1.getroll(17) << endl ;

}