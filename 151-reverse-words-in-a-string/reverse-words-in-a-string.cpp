class Solution {
public:
    string reverseWords(string s) {
        int N=s.size();
        int i=0;
        int j;
        string W, res="";
        while(i<N)
        {
        while(i<N && s[i]==' ')
        {
            i++;
        }
        j=i+1;  
        while(j<N && s[j]!=' ')
        {
            j++;
        }
        W=s.substr(i, j-i);
        if(res=="")
        {
            res+=W;
        }
        else{
            res=W+" "+res;
        }
            i=j+1;
        }
        i=0, N=res.size();
        while(i<N && res[i]==' ')
        {
            i++;
        }
        if(i>0) res=res.substr(i, N-1);
        return res;
    }
};