// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         unordered_map<int,int>map;
//         vector<int>ans;
        
//         for(int i=0;i<n;i++){
//             int rem = target - nums[i];
//             if(map.find(rem)!=map.end()){
//                ans.push_back(map[rem]);
//                ans.push_back(i);
//             }
//             else map[nums[i]] = i;
//         }
//         return ans;
//     }
// };