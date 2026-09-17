#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        unordered_set<string>str;
        for(int i = 0; i < n; i++){
            str.insert(words[i]);
        }
        for(int i = 0; i<n;i++){
            string rev=words[i];
            reverse(rev.begin(),rev.end());
            if(words[i]==rev) continue;
            if(str.find(rev)!=str.end()){
                count++;
                str.erase(words[i]);
            }
        }
        return count;
    }
};
int main(){

}