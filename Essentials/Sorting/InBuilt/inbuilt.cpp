#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int num1, int num2){
    return num1 < num2;
}
int main(){
    int data[] = {3,2,5,1};
    int size = sizeof(data)/sizeof(int);
    sort(data, data + size, compare);
    for (int i : data){
        cout << i << " ";
    }
    return 0;
}