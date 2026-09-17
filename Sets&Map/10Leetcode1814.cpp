// class Solution {
// public:
//     int rev(int n) {
//     int rev = 0;
//     while (n > 0) {
//         int digit = n % 10;   
//         rev = rev * 10 + digit; 
//         n /= 10;               
//     }
//     return rev;
// }
//     int countNicePairs(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         unordered_map<int,int>mp;
//         for(int i=0;i<n;i++){
//             nums[i] -= rev(nums[i]);
//         }
//         for(int i=0;i<n;i++){
//             if(mp.find(nums[i]) != mp.end()){
//             count = count % 1000000007;
//             count += mp[nums[i]];
//             mp[nums[i]]++;
//             }
//             else mp[nums[i]]++;
//         }
//         return count % 1000000007;
//     }
// };