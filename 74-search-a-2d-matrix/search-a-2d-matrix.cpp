class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            if(target>=matrix[i][0] && target <=matrix[i][m-1])
            {
                int low=0, high=m-1;
                while(low<=high)
                {
                    int mid=(low+high)/2;
                    if(matrix[i][mid]<target)
                    {
                        low=mid+1;
                    }
                    else if(matrix[i][mid]>target)
                    {
                        high=mid-1;
                    }
                    else
                    {
                    flag =true;
                    break;
                    }
                }
                break;
            }
        }
        return flag;
    }
};