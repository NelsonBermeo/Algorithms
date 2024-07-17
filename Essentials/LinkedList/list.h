#include <iostream>
using namespace std;

class List;

class Node{
    int data;
    
public:

    Node * next;
    Node(int d):data(d),next(NULL){}
    friend class List;

    int getData(){
        return data;
    }

};

class List{
    Node * head;
public:
    List():head(NULL){}

    Node * begin(){
        return head;
    }

    void append(int data){
        Node * n = new Node(data);
        if (head==NULL){
            head = n;
            return;
        }
        Node * current = head;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = n;
    }

    void display(){
        if (head==NULL){
            return;
        }
        Node * current = head;
        while(current->next != NULL){
            cout << current->data << "->";
            current = current->next;
        }
        cout << current->data << "->";
        
    }

    void remove(int data){
        if (head==NULL){
            return;
        } else if (head->data == data){
            Node * temp = head;
            head = head->next;
            delete temp;
            return;
        } else {
            Node * current = head;
            while (current->next != NULL && current->next->data != data){
                current = current->next;
            }
            if (current->next == NULL){
                cout << "Value not found" << "\n";
                return;
            } else if (current->next->next==NULL){
                current->next = NULL;
                return;
            } else {
                Node * temp = current->next->next;
                delete current->next;
                current->next = temp;
                
            }
        }
    
    }

    void reverse(){
        
    }
};