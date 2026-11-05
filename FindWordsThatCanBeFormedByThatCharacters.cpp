class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int arr[26] = {0};
        //count freq of chars
        for(int i=0 ; i<chars.length() ; i++)
        {
            arr[int(chars[i] - 97)] ++;
        }
        int sum = 0;
        for(int i=0 ; i<words.size() ; i++)
        {
            int arr2[26] = {0};
            bool flag = true;//assume that the word[i] can be formed by chars
            for(int j=0 ; j<words[i].length() ; j++)
            {
                arr2[int(words[i][j] - 97)]++;
            }
            for(int j=0 ; j<26 ; j++)
            {
                if(arr[j] < arr2[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) sum += words[i].length();
        }
        return sum;
    }
};
