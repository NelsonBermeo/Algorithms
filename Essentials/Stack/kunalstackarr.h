#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>

class StackException : public std::runtime_error {
public:
    explicit StackException(const std::string& message)
        : std::runtime_error(message) {}
};

class CustomStack {
protected:
    int* data_; //Declares a pointer to an array of integers
    /*
    Reasons why we use a pointer instead of int data[]
    1. Using int* data allows the array to be dynamically allocated which means the array can be specified at runtime (What does this mean?)
    2. For constructor initialization you can allocate memory dynamically in the constructor based on a given size, but with int data[] we'd need a fixed size known at compile time which would make it impossible to initialize the array with different sizes based on constructor arguments 
    */
    static const int DEFAULT_SIZE_ = 10;
    int ptr_;

public:
    CustomStack() : data_(new int[DEFAULT_SIZE_]), ptr_(0) {}

    CustomStack(int size) : data_(new int[size]), ptr_(0) {}

    ~CustomStack() {
        delete[] data_;
    } //This is a destructor that cleans up the allocated memory for the data array when a custom stack is destroyed

    bool push(int item) {
        if (isFull()) {
            std::cout << "Stack is full!!" << std::endl;
            return false;
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
        return ptr_ == DEFAULT_SIZE_ ; // ptr_ is at last index
    }

    bool isEmpty() const {
        return ptr_ == 0;
    }
};

#endif // STACK_H
