#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    //You can work with strings with char s[1000] = {...};
    //Or we can use a string which is a dynamic array
    string s; // = "hello world";
    // getline(cin,s,'.');
    // cout << s;
    //we can iterate through a string 
    // for (char i : s){
    //     cout << i << " ";
    // }
    //We can loop through sentences to put into a vector
    vector<string> strings;
    string temp;
    int n = 5;
    while(n--){
        getline(cin, temp);
        strings.push_back(temp);
    }
    for(string i: strings){
        cout << i << "\n";
    }

    return 0;
}