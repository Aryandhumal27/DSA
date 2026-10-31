class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int index = m + n -1 ;

        for (int i = 0 ; i < n ;i++){
             
            nums1[index] = nums2[i];
            index--;
        }

        sort(nums1.begin(),nums1.end());
    }
};