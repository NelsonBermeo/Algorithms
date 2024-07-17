#include <iostream>
using namespace std;
void permutate(string s, int i){
    if (i == s.length()-1){
        cout << s << "\n";
        return;
    }
    for (int j = i; j < s.length(); j++){
        swap(s[i],s[j]);
        permutate(s, i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    string str;
    cin >> str;
    permutate(str, 0);
    return 0;
}