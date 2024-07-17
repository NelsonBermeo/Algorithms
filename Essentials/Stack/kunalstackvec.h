//The way kunal works with stack is with an array using a pointer
//The attributes for a stack is the list of data, the default size, and the pointer initialized to -1
//The methods we have are the 2 constructors (one for default size), the isFull, isEmpty, push, pop, and peek
//There is a way to use an array instead of a vector, but it requires pointer concepts that are not too hard to grasp, but if we feel like learning about that we can ask chat gpt -- also a vector manages its own memory so it doesn't need a destructor
#ifndef STACK_H //This is a header guard and prevents inclusions of the same header file
#define STACK_H

#include <iostream>
#include <stdexcept> //Allows the use of standard exception classes like runtime_error
#include <vector>
using namespace std;

class StackException : public runtime_error {
public:
    explicit StackException(const string& message)
        : runtime_error(message) {}
}; //This is a custom exception class that inhertis from runtime_error and is thrown and caught specifically for stack-related errors 

class CustomStack {
protected:
    vector<int> data_;
    static const int DEFAULT_SIZE_ = 10;
    int ptr_; //Points to the top of the stack

public:
    CustomStack(): data_(DEFAULT_SIZE_), ptr_(0) {}

    CustomStack(int size) : data_(size), ptr_(0) {}

    bool push(int item) {
        // if (isFull()) {
        //     cout << "Stack is full!!" << endl;
        //     return false;
        // }
        if (isFull()) { 
            data_.resize(data_.size() * 2);
        }
        data_[ptr_] = item;
        ptr_++;
        return true;
    }

    int pop() {
        if (isEmpty()) {
            throw StackException("Cannot pop from an empty stack!!");
        }
        ptr_--;
        return data_[ptr_];
    }

    int peek() {
        if (isEmpty()) {
            throw StackException("Cannot peek from an empty stack!!");
        }
        return data_[ptr_-1];
    }

    bool isFull() const {
        return ptr_ == data_.size();
    }

    bool isEmpty() const {
        return ptr_ == 0;
    }

    void display() {
        if (isEmpty()){
            throw StackException("Cannot display an empty stack");
        }
        for (int i = 0; i <= ptr_-1; i++){
            cout << data_[i] << "->";
        }
    } // We could use string stream to make this more efficient for larger stacks, but for now this is chill
};

#endif // STACK_H
