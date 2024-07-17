#include <iostream>
using namespace std;
void printls(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << '\n';
}
void fillArray(int a[], int i, int n, int val){
    if (i==n){
        printls(a, n);
        return;
    }
    a[i] = val;
    fillArray(a, i+1, n, val+1);
    a[i] = a[i] * -1;
}
int main(){
    int a[100];
    int n;
    cin >> n;
    fillArray(a, 0, n, 0);
    printls(a, n);
}