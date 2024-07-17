#include <iostream>
using namespace std;
void bubble_sort(int a[], int s){
    for (int i = 1; i <= s-1; i++){
        for (int j = 0; j <= s - i - 1; j++){
            if (a[j+1]<a[j]){
                swap(a[j+1], a[j]);
            }
        }
    }
}
int main(){
    int a[] = {3,2,5,1};
    int size = sizeof(a)/sizeof(int);
    bubble_sort(a, size);
    for (int i : a){
        cout << i << " ";

    }
    return 0;
}