//We can implement a stack with a vector, a array or a linked list
//A deque is a stack/queue that you can add/remove from both sides
//There are two types ot stacks a dynamic stack and a regular stack
//Question -- I wonder how many variations of a stack we should know for an interview, theres arrays, linked list, vectors blah blah 

#include <iostream>
#include "kunalstackvec.h"
using namespace std;
int main(){
    CustomStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    cout << "the top element is " << stack.peek() << endl;
    cout << "the popped element is " << stack.pop() << 
    endl;
    cout << "the top element is " << stack.peek() << endl;
    cout << "the displayed data is as follows: " << endl;
    stack.display();

}