#include <iostream>
using namespace std;
// void swap(string &a, int id1, int id2){
//     char temp = a[id1];
//     a[id1] = a[id2];
//     a[id2] = temp;
// }
// void reverse(string &a){
//     int s = 0;
//     int e = a.length()-1;
//     while(s<e){
//         swap(a, s, e);
//         e--;
//         s++;
//     }
// }
// bool palindrome(string a){
//     string temp = a;
//     reverse(temp);
//     if (temp == a){
//         return true;
//     }
//     return false;
// }

//This function is great because here it doesn't use as much space complexity 
bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.length() - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}

int main(){
    string a = "nuts";
    bool idk = palindrome(a);
    cout << idk;
    return 0;
}