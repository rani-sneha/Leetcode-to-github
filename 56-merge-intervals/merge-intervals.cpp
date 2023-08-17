class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());

        int n=intervals.size();
        int i=0, j, en=-1, st, ens;
        while(i<n)
        {   
            ens=i;
            st=intervals[i][0];
            en=intervals[i][1];
            vector<int> inter;
            for(j=i+1; j<n; j++)
            {
                if(intervals[j][0]>intervals[ens][1])
                    break;
                if(intervals[j][1]>en)
                {
                    en=intervals[j][1];
                    ens=j;
                }
            }
            inter.push_back(st);
            inter.push_back(en);
            i=j;
            ans.push_back(inter);
            }
        return ans;
    }
};