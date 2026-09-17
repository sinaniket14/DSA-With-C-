#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    void nextPermutation(vector<int>& nums) {
    int n = nums.size();
        int idx = -1;
        // Step 1: Find the rightmost index 'idx' where nums[idx] < nums[idx + 1]
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }
        // Step 2: If no such index exists, reverse the entire array
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        // Step 3: Find the smallest number greater than nums[idx] in the suffix
        int j = -1;
        for (int i = n - 1; i>=0; i--) {
            if (nums[i] > nums[idx]) {
                j = i;
                break;
            }
        }
        // Step 4: Swap nums[idx] and nums[j]
         int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;

        // Step 5: Reverse the suffix starting at idx + 1
       reverse(nums.begin() + idx + 1, nums.end());
    }
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    nextPermutation(v);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}