class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> count;
        for (int x : arr1) count[x]++;
        
        vector<int> result;
        for (int x : arr2) {
            while (count[x]-- > 0) result.push_back(x);
            count.erase(x);
        }
        for (auto& [num, cnt] : count) {
            while (cnt-- > 0) result.push_back(num);
        }
        return result;
    }
};