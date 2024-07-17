#include <iostream>
using namespace std;

int main(){
    char sentence[1000];
    //This following code will check if the length doesn't exceed the sentence array 
    cin.getline(sentence,1000); //This will take input and put it into the sentence 
    cout << sentence << '\n';

    //we could also do this where we add a parameter that uses a hash to stop
    char paragraph[1000];
    cin.getline(paragraph,1000,'#');
    cout << paragraph << "\n";
}