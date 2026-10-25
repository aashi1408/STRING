class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //we also have to include soln for a case in which only one string
        if(strs.size() == 1 ) return strs[0];

        string ans = "";
        
        for(int i=0 ; i<strs.size() - 1 ; i++)
        {
            string common = "";
            for(int j=0 ; j<min(strs[i].length(),strs[i+1].length()) ; j++)
            {
                if(strs[i][j] == strs[i+1][j]) common += strs[i][j];
                else break;
            }
            if(common == "") return "";
            if(i == 0) ans = common;
            // else ans = min(common , ans);  wrong syntax
            else ans = (common.length() < ans.length()) ? common : ans;
        }
        return ans;
    }
};
