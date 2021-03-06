class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int> >& res, vector<int> &cur,int index) {
        res.push_back(cur);
        for (int i = index; i < nums.size(); i ++) {
            cur.push_back(nums[i]);
            helper(nums, res, cur, i + 1);
            cur.pop_back();
        }
    }
    vector<vector<int> > subsets(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > res;
        vector<int> cur;
        helper(nums, res, cur, 0);
        return res;
    }
};