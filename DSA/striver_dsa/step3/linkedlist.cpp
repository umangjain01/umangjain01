#include<iostream>
using namespace std ; 
class node{
    public:
    int data ; 
    node* next ; 

    node(int data){
        this -> data = data ; 
        this -> next = NULL ; 
    }

    ~node(){
        int value = this -> data ;
        if(this->next != NULL){
            delete next ;
            next = NULL;
        }
    }
};  

void InsertAtHead (node* &head, int d ){
    node* temp = new node(d);
    temp -> next = head ;
    head = temp ; 
}

void print(node* &head){
    node* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void InsertAtTail(node* &tail , int d ){
    node* temp = new node(d);
    tail -> next = temp ;
    tail = tail -> next ; // tail = temp ;

}


void InsertAtPosition(node* &tail , node * &head , int position , int d ){

    if(position == 1 ){
        InsertAtHead(head,d);
        return ;
    }
    node* temp = head ; 
    int cnt = 1 ; 
    while(cnt<position-1){
        temp = temp -> next ;
        cnt++;
    }

    if(temp-> next == NULL){
        InsertAtTail(tail,d);
        return ;
    }
    node* insert_node = new node(d);
    node_insert -> next = temp -> next ; 
    temp -> next = node_insert ; 
}

void deletenode(int position , node* & head){
    if(position == 1 ){
        node* temp = head;
        head = head -> next ;
        temp -> next = NULL;
        delete temp ;
    }

    node* curr = head ; 
    node* prev = NULL ; 

    int cnt = 1 ; 
    while(cnt<position){
        prev = curr ; 
        curr = curr -> next ;
        cnt++;
    }
    prev -> next = curr -> next ;
    curr-> next = NULL;
    delete curr;
}
int main(){
    node* node1 = new node(10);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next <<endl;

    node * head = node1 ; 
    InsertAtHead(head,12);
    print(head);
}