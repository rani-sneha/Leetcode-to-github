class Solution {
public:
    double myPow(double x, int n) {
        double mult=1.00;
        long nn=n;
        if(nn<0)
            nn=nn*-1;
        while(nn>0)
        {
           if(nn%2==0)
           {
               x=x*x;
               nn=nn/2;
           }
            else
            {
                mult=mult*x;
                nn=nn-1;
            }
        }
        double ans=n>0?mult:(double)1.0/(double)mult;
        return ans;
    }
};