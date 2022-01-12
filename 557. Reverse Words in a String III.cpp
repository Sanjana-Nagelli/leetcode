class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        int k;
       
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                k = i - 1;
                reverse(s.begin()+j,s.begin()+k+1);
                j = i + 1;
            }
        }
         reverse(s.begin() + j, s.end());
        return s;
    }
};