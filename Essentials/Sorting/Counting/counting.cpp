#include <iostream>
#include <vector>
using namespace std;
void counting_sort(int arr[], int size){
    int largest = INT_MIN;
    for (int i = 0; i<size; i++){
        if(arr[i] > largest){
            largest =arr[i];
        }
    }
    vector<int> freq(largest+1, 0);
    for (int i = 0; i < size; i++ ){
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}
int main(){
    int data[] = {3,2,5,1, -2};
    int size = sizeof(data)/sizeof(int);
    counting_sort(data, size);
    for (int i : data){
        cout << i << " ";
    }
    return 0;
}
