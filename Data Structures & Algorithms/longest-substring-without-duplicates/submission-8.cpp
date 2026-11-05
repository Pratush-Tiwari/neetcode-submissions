class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int n=s.length();
        int count=0;
        int maxi=0;
        int lasti=-1;

        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>lasti){
                lasti=mp[s[i]];
                count=i-mp[s[i]];
                mp[s[i]]=i;
            }
            else{
                mp[s[i]]=i;
                count++;
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};
