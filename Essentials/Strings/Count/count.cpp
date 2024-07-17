#include <iostream>
using namespace std;
//Given a sentence, coun the number of spaces, digits and alphabets in it 

int main(){
    char ch;
    ch = cin.get();
    int alpha = 0;
    int digit = 0;
    int space = 0;
    while (ch != '\n'){
        if (ch >= '0' and ch <= '9'){
            digit++;
        } else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'B')){
            alpha++;
        } else if (ch == ' ' or ch == '\t'){
            space++;
        }
        ch = cin.get();
    }
    cout << "Alphabet count: " << alpha << "\n";
    cout << "Digit count: " << digit << "\n";
    cout << "Space count: " << space << "\n";
}