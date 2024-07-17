#include <iostream>
using namespace std;
int max_sub_sum(int a[], int n){
    int cs = 0;
    int largest = 0;
    for (int i = 0; i < n; i++){
        cs = cs + a[i];
        if (a[i]<0){
            cs = 0;
        }
        largest = max(cs, largest);
    }
    return largest;
}
int main(){
    int a[] = {};
    int size = sizeof(a)/sizeof(int);
    int maxi = max_sub_sum(a, size);
    cout << maxi;
    return 0;
}