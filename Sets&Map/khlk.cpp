#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2,4,4,4,5,6,7};
    int x = 4;

    auto first = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
    auto last  = upper_bound(nums.begin(), nums.end(), x) - nums.begin() - 1;

    if (first == nums.size() || nums[first] != x)
        cout << "[-1, -1]";
    else
        cout << "[" << first << ", " << last << "]";
}