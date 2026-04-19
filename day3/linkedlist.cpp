#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){
    //Creating nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    //Assign Data
    head->data = 10;
    second->data = 20;
    third->data = 30;
    //Connect nodes
    head->next = second;
    second->next = third;
    third->next = NULL;
    Node* temp = head;
    cout <<"Linked list";
    while(temp != NULL)
    {
        cout <<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}