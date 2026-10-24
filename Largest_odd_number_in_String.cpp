class Solution {
public:
    string largestOddNumber(string s) {
        string ans = "";
        bool odd = false;
        //as we know that the largest odd number will be found from backward
        //so look for the last odd digit in the string
        int end_index ;
        for(int i=s.length()-1 ; i>=0 ; i--)
        {
            if((s[i] - '0') % 2 != 0)
            { 
            end_index = i;//you can also do this -->returning the substring directly when you find the last odd digit.
            odd = true;
            break;
            }
        }
        if(odd)
        {
            ans = s.substr(0, end_index - 0 + 1);
        }
        return ans;
    }
};
