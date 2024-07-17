#include <iostream>
using namespace std;
//This function takes in a pass by value and affects a new bucket called income within the applyTax function and will not change the variable income within the main, if we put a & then we would pass it by reference
void applyTax(int & income){ //or we could do (int * income) if we called this function with an address
    float tax = .10;
    income = income - income*tax;
}
int main(){
    int income;
    cin >> income;
    applyTax(income);
    //or we could do applyTax(&income)
    cout << income;
    return 0;
}