//This is rotated search, where our input is not completely sorted but rotated around a pivot. Such as 7,9,10,1,2,3,4,5,6 
//We are going to do a modified binary search 
#include <iostream>
#include <vector>
using namespace std;
int rotateSearch(vector<int> a, int key){
    int s = 0;
    int e = a.size()-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if (a[mid]==key){
            return mid;
        } else {
            if (a[s]<=a[mid]){
                if (key >= a[s] and key <= a[mid]){
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            } else {
                if (key >= a[mid] and key <= a[e]){
                    s = mid + 1;
                } else{
                    e = mid - 1;
                }
            }
        }
    }
    return -1;
}
int main(){
    vector<int> nums;
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(10);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    int index = rotateSearch(nums, 5);
    cout << index;
    return 0;
}