

class Solution {
public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> result;
        int count[n+1] = {0};
        
        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }
        
        for (int i = 0; i <= n; i++) {
            if (count[i] > 1) {
                result.push_back(i);
            }
        }
        
        if (result.empty()) {
            result.push_back(-1);
        }
        
        return result;
    }
};
