#include <iostream>
using namespace std;

template<typename T>
class Stack;

template<typename T>
class Node{
    
public:
    T data;
    Node * next;
    // Node(T val):data(val),next(NULL){}
    Node (T data){
        data = d;
    }

};

template<typename T>
class Stack{
    Node<T> * head;
public: 
    // Stack():head(NULL){}
    Stack(){
        head = NULL;
    }
    
    void push(T data){
        if (head == NULL){
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
        if (head == NULL){
            return;
        }
        Node * current = head;
        while(current->next != NULL){
            cout << current->data << "->";
            current = current->next;
        }
        cout << current->data << "->";
    }

    void pop(){
        if (head == NULL){
            return;
        } else if (head->next == NULL){
            head->data = NULL;
        } else {
            Node * current != head;
            while(current->next != NULL){
                current = current->next;
            }
        }
    }

};