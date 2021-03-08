
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        string out=countAndSay(n-1);
        string newout="";
        int m=out.length();
        if(m>1)
        {
            int count=1;
            for(int i=1;i<m;i++)
            {
                if(out[i]==out[i-1])
                    count++;
                else
                {
                    newout+=to_string(count)+out[i-1];
                    count=1;
                }
            }
            newout+=to_string(count)+out[m-1];
        }
        return newout;
    }
};