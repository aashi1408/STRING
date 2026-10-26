class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
     
        int i=0 , j=goal.length()-1;
        int last_index;
        while(i != s.length())
        {
            if(s.substr(i,s.length() - i + 1) == goal.substr(0,j-0+1) )
            {
                last_index = j;
                break;
            } 
            else
            {
                i++;  //      s       goal
                j--;   //    i-->     <--j
            }
        }

        int k = last_index + 1;
        int l=0;
        while(k != goal.length())
        {
            if(s[l] != goal[k]) return false;
            k++;
            l++;
        }
        return true; 
    }
};
