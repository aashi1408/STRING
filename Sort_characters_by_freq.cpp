class Solution {
public:
    string frequencySort(string s) {
        //count freq of each char
        int freq[123] = {0};
        for(int i=0 ; i<s.length() ; i++) 
            freq[s[i]] ++;
        //define a vector in which we are gonna add the char with its freq(concatenated)
        vector<string> str;
        for(int i=0 ; i<=122 ; i++)
        {
            if(freq[i] != 0)
                str.push_back(to_string(freq[i]) + string(1,char(i)));
        }
        //sort in decrease order of ascii values
        // sort(str.rbegin(),str.rend());<-----this sort is incorrect
		//using a custom comparator instead
		sort(str.begin(),str.end(),[](string a,string b){
            int n1 = a.length();
            int num1 = stoi(a.substr(0,n1-1));
            int n2 = b.length();
            int num2 = stoi(b.substr(0,n2-1));
			return num1 > num2;
		});
        // generate string characters by decreasing freq
        string ans = "";
        for(int i=0 ; i<str.size() ; i++)
        {
            // for(int j=1 ; j<=str[i][1] ; j++)<----IMP to use - '0' if its a char num
            int n = str[i].length();
            int num = stoi(str[i].substr(0,n-1));
            for(int j=1 ; j<=num ; j++)
            {
                ans += str[i][str[i].length()-1];
            }
        }  
        return ans;      
    }
};
