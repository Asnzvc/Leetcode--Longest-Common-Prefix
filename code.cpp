class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int i;
        for(i=1 ; i<strs.size();i++){
            int j ;
            for(j=0 ; j<strs[i].size();j++){
                if(ans[j]!=strs[i][j])
                    break ;
            }
        ans=strs[i].substr(0,j) ;
        if(ans=="")
            return "" ;
        }
        return ans ;
    }
};