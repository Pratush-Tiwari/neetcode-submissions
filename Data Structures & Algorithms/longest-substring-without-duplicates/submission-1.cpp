class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n=s.length();
        int maxi=1;


        for(int i=0;i<n;i++){
            int count=1;
            map<char,int>mp;
            mp[s[i]]++;
            for(int j=i+1;j<n;j++){
                if(!mp.count(s[j])){
                    count++;
                    maxi=max(maxi,count);
                    mp[s[j]]++;
                    continue;
                }
                else {break;}
                // else if(j==n) break;
            }
        }
        if(n==0) return 0;
        return maxi;

        
    }
};
