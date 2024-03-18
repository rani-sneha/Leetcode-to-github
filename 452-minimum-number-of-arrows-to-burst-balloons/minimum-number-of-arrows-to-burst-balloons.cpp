class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), sortcol);
        // for (int i = 0; i < points.size(); i++) {
        // for (int j = 0; j < points[1].size(); j++)
        //     cout << points[i][j] << " ";
        // cout << endl;
    //}
        int st=points[0][1];
        int step=1;
        for(int i=1; i<points.size(); i++)
        {
            if(points[i][0]>st)
            {
                step++;
                st=points[i][1];
            }
        }
        return step;
    }
};