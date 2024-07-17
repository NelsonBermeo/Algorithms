#include <iostream>
using namespace std;

void printAllPairs(int arr[], int n){
    int prefixSumArray[100] = {0};
    prefixSumArray[0] = arr[0];
    for (int i =1; i < n;i++){
        prefixSumArray[i] = arr[i] + prefixSumArray[i-1];
    }

    // for(int val : prefixSumArray){
    //     cout << val << "\n";
    // }
    int max_val = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int val_line = i>0 ? prefixSumArray[j]-prefixSumArray[i-1] : prefixSumArray[j];
            if( val_line >= max_val){
                max_val = val_line;
            }
            
        }
        
    }
    cout << max_val;
}

int main(){
    int a[] = {3, -6, 4, 1};
    int size = sizeof(a)/sizeof(int);
    printAllPairs(a, size);
    
    return 0;
}