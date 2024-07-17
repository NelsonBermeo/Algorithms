#include <iostream>
#include <vector>
using namespace std;
vector<int> closestSum(vector<int> arr, int x){
    vector<int> temp;
    int n = arr.size();
    int s = 0, e=n-1;
    int diff = INT_MAX;
    int leftIdx,rightIdx;
    while(s<e){
        int cs = arr[s] + arr[e];
        if (abs(cs-x) < diff){
            leftIdx = s;
            rightIdx = e;
            diff = abs(cs-x);
        } 
        if (cs>x){
            e--;
        }
        else{
            s++;
        }
    }
    temp.push_back(arr[leftIdx]);
    temp.push_back(arr[rightIdx]);
    return temp;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    vector<int> ans = closestSum(nums, 4);
    for (int i : ans){
        cout << i << " ";
    }
    return 0;
}