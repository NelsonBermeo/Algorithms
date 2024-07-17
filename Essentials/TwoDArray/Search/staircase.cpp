#include <iostream>
using namespace std;
pair<int, int> twodsearch(int arr[][4], int n, int m, int key){
    if (arr[0][0]>key or arr[n-1][m-1]<key){
        return make_pair(-1,-1);
    }
    int i = 0;
    int j = m-1;
    while(i<=n-1 and j>0){
        if (arr[i][j]==key){
            return make_pair(i,j);
        } else if (arr[i][j]>key){
            j--;
        } else if(arr[i][j]<key){
            i++;
        }
    }
    return make_pair(-1,-1);
}
int main(){
    int arr[4][4] = {
        {10,20,30,40},
        {12,22,32,42},
        {19,24,33,44},
        {23,25,36,52}
    };
    
    pair<int, int> cords = twodsearch(arr,4,4,24);
    cout << cords.first << " " << cords.second;
    return 0;
}