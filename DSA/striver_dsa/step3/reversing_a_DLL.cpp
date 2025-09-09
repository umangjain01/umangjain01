#include<iostream>
using namespace std ; 
class node{
    public:
    int data ; 
    node* prev;
    node* next ;

    node(int d){
        this-> data = d ;
        this->prev = NULL;
        this->next = NULL;
    }
    node(int d , node* prev , node* next){
        this-> data = d ;
        this->prev = prev;
        this->next = next;
    }
};
void reverse(node*head ){
    if(head == NULL || head->next == NULL){
        return ;
    }
    node* last = NULL ; 
    node* curr = head ;
    while(curr != NULL){
        last = curr->prev;
        curr->prev = curr->next;
        curr->prev = last ; 
        curr = curr-> prev;
    }
}
