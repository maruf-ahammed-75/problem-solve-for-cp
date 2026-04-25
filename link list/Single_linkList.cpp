#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nextptr;

    Node(int data){
        this->data = data;
        nextptr = NULL;
    }
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int data){
        Node* newnode = new Node(data);//dynamic memory allocation
                                       //function call ses holaw ata memory te thakbe
        
        if(head==NULL){
            head = newnode;
            tail = newnode;
        }   
        else{
            newnode->nextptr = head;
            head = newnode;
        }
    }

    void Push_back(int data){
        Node* newnode = new Node(data);
        
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->nextptr = newnode;
            tail = newnode;
        }
    }


    void pop_front(){
        if(head == NULL){
            cout<<"empty"<<endl;
            return;
        }
        
        Node* temp = head;
        
        head = head->nextptr;
        temp->nextptr = NULL;
        delete temp;
    }


    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->nextptr;
        }
        cout<<endl;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Empty\n"<<endl;
            return;
        }
        Node* temp = head;
        
        while(temp->nextptr != tail){
            temp = temp->nextptr;
        }
        
        temp->nextptr = NULL;
        delete tail;
        tail = temp;
    }

    void insert_middle(int data,int pos){
        Node* newnode = new Node(data);
        
        
        Node* temp = head;
        
        for(int i=0 ; i<pos - 1 ; i++){
            temp = temp->nextptr;
        }
        
        newnode->nextptr = temp->nextptr;
        
        temp->nextptr = newnode;
    }


    void search(int key){
        Node* temp = head;
        int pos = 0;
        while(temp!=NULL){
            if(temp->data == key){
                cout<<"Found at position "<<pos<<endl;
                return;
            }
            temp = temp->nextptr;
            pos++;      
        }
        cout<<"Not Found\n";
    }


};


int main(){
    List l;
    l.Push_back(50);
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.Push_back(40);
    l.insert_middle(25, 3);
    l.print();

    l.pop_front();
    l.print();

    l.pop_back();
    l.print();

    return 0;


}