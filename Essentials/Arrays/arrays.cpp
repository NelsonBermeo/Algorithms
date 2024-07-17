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
    for (int i = 0; i <= n; i++){
        for (int j = i; j <= n; j++){
            int val_line = i>0 ? prefixSumArray[j]-prefixSumArray[i-1] : prefixSumArray[j];
            
            if( val_line >= max_val){
                max_val = val_line;
            }
            
        }
        
    }
    cout << max_val;
}
// -------------------- Kadane's Algorithm ------------------
int max_subarray_sum(int arr[], int n){
    int cs = 0;
    int largest = 0;
    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if (cs < 0 ){
            cs =0;
        }
        largest = max(largest,cs);
    }
    return largest;
}

int main(){
    int arr[] = {1,2,3,4};
    int size = (sizeof(arr)/sizeof(int));
    cout << "----------" << "\n";
    printAllPairs(arr, size);
    // for(int val : arr){
    //     cout << val << "\n";
    // }
    return 0;
}