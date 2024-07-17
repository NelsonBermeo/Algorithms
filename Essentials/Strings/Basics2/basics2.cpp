//String copy, compare, concat
#include <iostream>
using namespace std;

int main(){
    char a[1000] = "apple";
    char b[1000];
    //calculate length
    cout<<strlen(a)<<"\n";
    //copy O(n) dest, input
    strcpy(b,a);
    cout << b << '\n';
    //Compare; 0 means matching
    cout<<strcmp(a,b)<<"\n";
    //Bring two strings together (concatenate)
    char web[] = "www.";
    char domain[] = "codingminutes.com";
    cout << strcat(web,domain) << "\n";
    return 0;
}