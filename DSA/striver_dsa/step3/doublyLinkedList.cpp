#include<iostream>
using namespace std ; 
class node{
    public:
    int data ; 
    node* prev;
    node* next ;

    node(int d ){
        this -> data = d ;
        this -> prev = NULL ; 
        this -> next = NULL;
    }
    ~node(){
        if(next!=NULL){
            delete next ;
            next = NULL;
        }
    }
};

void print_node(node* &head){
    node* temp = head ; 
    while(temp != NULL){
        cout<<temp->data <<endl;
        temp = temp -> next ;
    }
    cout<<endl;
}


void InsertAtHead(node* &tail , node* &head , int d ){
    if(head== NULL){
        node* temp = new node (d);
        head = temp ;
        tail = temp ;
    }
    else{
    node* temp = new node (d);
        temp->next = head;
        head->prev = temp;
        head = temp ;
    }
}

void InsertAtTail(node* &tail ,node* &head , int d ){
    if(tail==NULL){
        node*  temp = new node(d);
        tail = temp ;
        head = temp ;
    }
    else{
    node*  temp = new node(d);
    tail -> next = temp ; 
    temp -> prev = tail ; 
    tail = temp ;
    head = temp ;
    }
}

void InsertAtPosition(node* &tail ,node* &head , int position , int d ){
    node* temp = head ; 
    if(position==1){
        InsertAtHead(tail,head,d);
        return;
    }
    int cnt = 1 ;
    while(cnt < position - 1 ){
        temp = temp -> next ;
        cnt++;
    }
    if(temp-> next == NULL){
        InsertAtTail(tail,head,d);
        return ;
    }

    node* insert_node = new node(d);
    insert_node->next = temp->next;
    insert_node->prev = temp;
    temp->next->prev = insert_node;
    temp->next = insert_node;
}
void delete_node(node* &head , int position){
    if(position==1){
        node* temp = head ; 
        head = head -> next ;
        if(head != NULL){
            head -> prev = NULL;
        }
        temp -> next = NULL;
        delete temp;
    }
    else{
    node * temp = head ; 
    int cnt = 1 ; 
    while(cnt<position){
        temp = temp -> next ; 
        cnt++;
    }
    if(temp == NULL){
        return ;
    }
    if(temp->prev != NULL){
        temp -> prev -> next = temp -> next ;
    }
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    temp -> next = NULL;
    temp -> prev  = NULL;
    delete temp ;
    }

}
int main(){
    node* node1 = new node (10);
    node * head = node1 ; 
    node * tail = node1;

    InsertAtHead(head,11);
    InsertAtHead(head,12);
    InsertAtHead(head,13);
    InsertAtTail(tail,15);
    print_node(head);
    InsertAtPosition(tail,head,2,20);
    print_node(head);
}