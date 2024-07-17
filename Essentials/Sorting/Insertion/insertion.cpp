#include <iostream>
using namespace std;
void insertion_sort(int data[], int size){
    for (int i = 1; i <= size-1; i++){
        int current = data[i];
        int prev = i - 1;
        while(prev >= 0 and data[prev] > current){
            data[prev + 1] = data[prev];
            prev = prev-1;
        }
        data[prev + 1] = current;
    }
}
int main(){
    int data[] = {3,2,5,1};
    int size = sizeof(data)/sizeof(int);
    insertion_sort(data, size);
    for (int i:data){
        cout << i << " ";
    }
    return 0;
}