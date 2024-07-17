#include <iostream>
using namespace std;

class Node{
    int data;
public:
    Node * next;
    Node(int d):data(d),next(NULL){}
    int getData(){
        return data;
    }
};

class List{
    Node * head;
public:
    List():head(NULL){}
    Node * getHead(){
        return head;
    }
    //We have 3 methods, remove, display, and append
    void append(int data){
        if (head==NULL){
            head = new Node(data);
            return;
        }
        Node * current = head;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = new Node(data);
    }

    void display(){
        if (head==NULL){
            return;
        }
        Node * current = head;
        while(current->next!=NULL){
            cout << current->getData() << "->";
            current = current->next;
        }
        cout << current->getData() << "->";
    }

    void remove(int data){
        if (head==NULL){
            return;
        } else if (head->getData()==data){
            Node * temp = head;
            head = head->next;
            delete temp;
            return;
        } else{
            Node * current = head;
            while(current->next != NULL and current->next->getData()!=data){
                current = current->next;
            }
            if(current->next == NULL){
                cout << "That is not in the list" << "\n";
                return;
            } else if (current->next->next == NULL){
                Node * temp = current->next;
                current->next = NULL;
                delete temp;
            } else {
                Node * temp = current->next->next;
                Node * temp2 = current->next;
                current->next = temp;
                delete temp2;
            }
        }
    }
};