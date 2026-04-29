#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyList{
public:
    Node* head;
    Node* tail;

    DoublyList(){
        head = NULL;
        tail = NULL;
    }
    void pushFront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<' ';
            temp = temp->next;
        }
        cout<<endl;
    }
};





int main(){
    DoublyList dll;
    dll.pushFront(10);
    dll.pushFront(20);
    dll.pushFront(30);
    dll.pushFront(40);

    dll.pushBack(50);
    dll.pushBack(60);
    dll.pushBack(70);
    dll.print();

}