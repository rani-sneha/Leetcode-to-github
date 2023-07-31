class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int l=m-1;
        int r=0;
        while(l>=0 && r<n)
        {
            if(nums1[l]>nums2[r])
            {
                swap(nums1[l], nums2[r]);
            }
            l--;
            r++;
        }
                sort(nums2.begin(), nums2.end());
                for(int i=m, z=0; i<m+n; i++, z++)
        {
            nums1[i]=nums2[z];
        }
        sort(nums1.begin(), nums1.end());


    }
};