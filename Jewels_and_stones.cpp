class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq[123] = {0};
        //which jewels do you have
        for(int i=0 ; i<jewels.length() ; i++)
        {
            freq[jewels[i]] = 1;
        }
        int jewels_count = 0;
        for(int i=0 ;i<stones.length() ; i++)
        {
            if(freq[stones[i]] == 1) jewels_count ++;
        }
        return jewels_count;
    }
};
