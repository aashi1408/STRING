class Solution {
public:
    bool isPalindrome(string s) {
        string str1 = "",str2 = "";
        //str1 for forward phrase
        for(int i=0 ; i<s.length() ;i++)
        {
            if(s[i]>='a' && s[i]<='z' or s[i]>='A' && s[i]<='Z' or s[i]>='0' && s[i]<='9')//is s[i] an alphanumeric
            {
                if(s[i]>='A' && s[i]<='Z') str1 += char(int(s[i]) + 32);
                else str1 += s[i];
            }
        }
        //str2 for backward phrase
        for(int i=s.length()-1 ; i>=0 ;i--)
        {
            if(s[i]>='a' && s[i]<='z' or s[i]>='A' && s[i]<='Z' or s[i]>='0' && s[i]<='9' )//is s[i] an alphanumeric
            {
                if(s[i]>='A' && s[i]<='Z') str2 += char(int(s[i]) + 32);
                else str2 += s[i];
            }
        }
        return str1 == str2 ;
    }
};
