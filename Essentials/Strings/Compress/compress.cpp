#include <iostream>
#include <vector>
#include <string>
using namespace std;
//So we want to take in a char array and use a string to store each char with the number of corresponding chars, and then updating the original char array with this string 
string compressString(string str){
    int n = str.length();
    int count = 1;
    string output;
    for (int i = 0; i<n; i++){
        int count = 1;
        while(i < n-1 and str[i+1] == str[i]){
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if(output.length() > str.length()){
        return str;
    } else {
        return output;
    }
}

int main(){
    string s1 = "aaabbccddee";
    cout << compressString(s1) << "\n";
    string s2 = "abcd";
    cout << compressString(s2) << "\n";
    return 0;
}