class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        char arr[256] = {0};//0 as default for all values but ' ' only intializes the first value and rest all by 0
        char arr2[256] = {0};
        for(int i=0 ; i<s.length() ; i++)
        {
            if(arr[s[i]] == '\0' && arr2[t[i]] == '\0')//both cdns are necessary
            { 
                arr[s[i]] = t[i];//only one way mapping is not enough
                arr2[t[i]] = s[i];//so check both ways
            }
            else if(arr[s[i]] != t[i] or arr2[t[i]] != s[i]) return false;
            
        }
        return true;
    }
};
