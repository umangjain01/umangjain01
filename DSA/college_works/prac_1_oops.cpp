#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <utility>
#include <climits>
#include <map>
#include <cmath>
using namespace std ;
class student {

    string name ; 
    int age ; 
    float height ; 
    char gender ; 
    bool isStudent ; 

    public :

    student(string name , int age , float height , char gender , bool isStudent ){
        this-> name = name ; 
        this->age = age ; 
        this->height = height ; 
        this->gender = gender ;
        this->isStudent = isStudent;
    }
    void display(){
        cout<<name <<endl;
        cout<<age<<endl ;
        cout<<height<<endl;
        cout<<gender<<endl;
        cout<<(isStudent ? 1 : 0 )<<endl;
    }

};

class calculator {
    int a ; 
    int b ; 
    string op ;
    public:
    void input(){
        cout<<"Enter first number:";
        cin >> a ;
        cout<<"Enter Second number:";
        cin >> b ; 
        cout<<"Enter operator:";
        cin >> op ; 
    }
    void solve(){
        if (op == "+")       cout << (a + b) << endl;
        else if (op == "-")  cout << (a - b) << endl;
        else if (op == "*")  cout << (a * b) << endl;
        else if (op == "/")  cout << (b != 0 ? (a / b) : 0) << endl;
        else if (op == "%")  cout << (b != 0 ? (a % b) : 0) << endl;
        else if (op == "==") cout << (a == b ? "true" : "false") << endl;
        else if (op == "!=") cout << (a != b ? "true" : "false") << endl;
        else if (op == ">")  cout << (a > b ? "true" : "false") << endl;
        else if (op == "<")  cout << (a < b ? "true" : "false") << endl;
        else if (op == "&&") cout << ((a && b) ? "true" : "false") << endl;
        else if (op == "||") cout << ((a || b) ? "true" : "false") << endl;
        else if (op == "!")  cout << (!(a) ? "true" : "false") << endl;

        else cout << "Invalid operator!" << endl;
    }
};

class creating_array{
    int arr[5] = {10,20,30,40,50};
    public:
    void display(){
        for(int i = 0 ; i < 5 ; i++){
            cout<<arr[i]<<" ";
        }
    }

};


class eveodd {
int x ; 
public:
void input(){
    cout<<"Enter your number:";
    cin >> x ; 
}
void check(){
    cout<<(x%2==1?"odd":"even")<<endl;
}
};


int main(){
eveodd s1 ;
s1.input();
s1.check();
}