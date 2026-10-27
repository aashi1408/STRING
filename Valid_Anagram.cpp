class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        //anagrams have same length,same letters with same freq
        // can't use char array
        //if it's char array means it can't store count/freq
        //so using int array
        int arr1[123] = {0};
        int arr2[123] = {0};
        //loop for freq count of characters of s
        for(int i=0 ; i<s.length() ; i++)
            arr1[s[i]]++;
        //loop for freq count of characters of s
        for(int i=0 ; i<t.length() ; i++)
            arr2[t[i]]++;   
        //now check if the same letters have same freq or not
        for(int i=97 ; i<=122 ; i++)
            if(arr1[i] != arr2[i]) return false;
        //loop was finished successfully means they are anagrams!!
        return true;
    }
};
