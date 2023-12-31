class Solution {
    static bool compare(string s1, string s2){
        int l1=s1.length(), l2=s2.length();
        if(l1!=l2){
            return l1>l2;
        }
        return s1>s2;
    }
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), compare);
        return nums[k-1];
    }
};