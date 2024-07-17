#include <iostream>
#include <vector>
#include <algorithm>
//Something we can do is that we can maintain a vector or list in the signature and everytime we hit the base case we can add to that list, then we would sort it in the main with another function
using namespace std;
bool compare(string a, string b){
    if (a.length() == b.length()){
        return a < b; //lexiograpgraphically 
    }
    return a.length() < b.length();
}
void subsets(char in[], char o[], int i, int j, vector<string> &ls){
    if (in[i]=='\0'){
        o[j] = '\0';
        // if (o[0] == '\0'){
        //     ls.push_back("NULL");
        // }
        string temp(o);
        ls.push_back(temp);
        return;
    }
    o[j] = in[i];
    subsets(in, o, i+1, j+1, ls);
    subsets(in, o, i+1, j, ls);
}
int main(){
    char in[100];
    char o[100];
    vector<string> ls;
    cin >> in;
    subsets(in, o, 0, 0, ls);
    sort(ls.begin(),ls.end(),compare);
    for (auto s : ls){
        cout << s << ", ";
    }
    return 0;
}