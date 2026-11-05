class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length())return false;

        map<char,int> mp1;
        map<char,int> mp2;

        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        if(mp1.size()!=mp2.size()) return false;

        for(auto it : mp1){
            if(it.second!=mp2[it.first]) return false;
        }

        return true;
        
    }
};
