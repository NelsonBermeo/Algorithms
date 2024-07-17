#include <iostream>
using namespace std;

int main(){
    //------------Address of a pointer-----------
    //This address must be stored in a special type of variable called a pointer
    int x = 1; //Value of  x
    int * xptr = &x; //Address of x 
    //--------------Dereference Operator
    //If we have a pointer then when we use * on that pointer then we can store the value inside that variable that we are pointing to
    int xcopy = * xptr; //Value pointed to by x (x copy)
    //--------------Reference Variable------------------
    //Nickname and name refer to the same bucket
    int name = 10;
    int & nickname = name;

    


    return 0;
}