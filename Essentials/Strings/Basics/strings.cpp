//The correct way of creating a char array is char a[100] = {'a','b','c','\0'}; because the null value terminates the array to avoid garbage values. Another way of accomplishing the same task is to do char a[100] = "abc"; -> this version automatically avoids garbage values. 
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[] = "abcdefgh" ;
    cout << strlen(a) << "\n"; //8
    cout << sizeof(a) << "\n"; //9 b/c of null value 
    // char b[100];
    // cin >> b;
    char c[100];
    char temp = cin.get(); //This following code allows me to type sentences
    int len = 1;
    while(temp!='\n'){
        len++;
        cout << temp;
        temp = cin.get();
    }
}