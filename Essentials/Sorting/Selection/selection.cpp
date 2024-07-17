#include <iostream>
using namespace std;
void swap(int arr[], int index1, int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
void selection_sort(int arr[], int size){
    for (int i = 0; i<=size-2;i++){
        int min_position = i;
        for (int j = i; j<size;j++){
            if (arr[j]<arr[min_position]){
                min_position = j;
            }
        }
        swap(arr, i, min_position);
    }
}
int main(){
    int data[] = {3,2,5,1,-2};
    int size = sizeof(data)/sizeof(int);
    selection_sort(data,size);
    for (int i : data){
        cout << i << " ";
    }
    return 0;
}
