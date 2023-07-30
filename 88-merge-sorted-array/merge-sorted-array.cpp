class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     vector <int> ans;
        int p1=0, p2=0;
        int st, sz;
        while(p1< m && p2<n)
        {
            if(nums1[p1]<nums2[p2])
            {
                ans.push_back(nums1[p1]);
                p1++;
            }
            else
            {
                ans.push_back(nums2[p2]);
                p2++;  
            }
        }
        if(p1>=m)
        {
            for(int i=p2; i<n; i++)
                ans.push_back(nums2[i]);
        }
        else
        {
            for(int i=p1; i<m; i++)
            {
                ans.push_back(nums1[i]);
            }
        }
        for(int i=0; i<ans.size(); i++)
        {
            nums1[i]=ans[i];
        }
    }
};