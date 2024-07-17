#include <iostream>
using namespace std;
int max_subarray(int arr[], int size){
    int largestSum = 0;
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            int subarraySum = 0;
            for (int k = i; k <= j; k++){
                subarraySum += arr[k];
            }
            largestSum = max(largestSum, subarraySum);
        }
    }
    return largestSum;
}
int main(){
    int data[] = {1,2,3,4};
    int size = sizeof(data)/sizeof(int);
    int sum = max_subarray(data, size);
    cout << sum;
    return 0;
}