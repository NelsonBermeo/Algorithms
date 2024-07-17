#include <iostream>
using namespace std;

//There are two ways of storing arrays such as row major form and column form and the memory is storing the numbers side by side either by row or column

void print(int arr[][100], int n, int m){
    cout << "{";
    for (int i =0; i<n;i++){
        for(int j=0; j<m;j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "}";
}

int main(){
    int arr[100][100];
    int n,m;
    cin>>n>>m;
    //Take input 
    for (int i = 0; i < n; i++){
        for(int j=0; j<m;j++){
            cin >> arr[i][j];
        }
    }
    print(arr, n, m);

    return 0;
}