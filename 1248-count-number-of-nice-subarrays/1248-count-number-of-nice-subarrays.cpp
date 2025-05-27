class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> countMap;
        countMap[0] = 1;
        int currentOddCount = 0, result = 0;
        
        for (int num : nums) {
            if (num % 2 == 1) {
                currentOddCount++;
            }
            if (countMap.find(currentOddCount - k) != countMap.end()) {
                result += countMap[currentOddCount - k];
            }
            countMap[currentOddCount]++;
        }
        return result;
    }
};
