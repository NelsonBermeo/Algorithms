#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> & a, int s, int e){
    int i = s;
    int m = s + (e-s)/2;
    int j = m + 1;
    vector<int> temp;
    while (i <= m && j <= e){
        if (a[i]<a[j]){
            temp.push_back(a[i]);
            i++;
        } else {
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(a[i++]);
    }
    while(j<=e){
        temp.push_back(a[j++]);
    }
    int k = 0;
    for (int i = s; i <= j; i++){
        a[i] = temp[k++];
    }
}
void mergesort(vector<int> & a, int s, int e){
    if (s>=e){
        return;
    }
    int m = s + (e-s)/2;
    mergesort(a, s, m);
    mergesort(a, m+1, e);
    merge(a, s, e);
}
int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(1);
    mergesort(arr, 0, arr.size()-1);
    for (int i : arr){
        cout << i << " ";
    }
    return 0;
}