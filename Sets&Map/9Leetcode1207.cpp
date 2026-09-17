// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         int n = arr.size();
//         unordered_map<int,int>map;
//         for(int i=0;i<n;i++){
//             map[arr[i]]++;
//         }
//         unordered_set<int>set;
//         for(auto x : map){
//             int freq = x.second;
//             if(set.find(freq)!=set.end()) return false;
//             else set.insert(freq);
//         }
//         return true;
//     }
// };