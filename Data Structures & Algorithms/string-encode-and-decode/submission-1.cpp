class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        for(int i=0;i<n;i++){
            ans+=to_string(strs[i].length())+'#'+strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        int l=0;
        int n=s.length();
        vector<string> ans;

        while(l<n){
            string num="";
            string put="";
            while(s[l]!='#'){
                num+=s[l];
                l++;
            }
            l++;
            int count=stoi(num);
            while(count!=0){
                put=put+s[l];
                l++;
                count--;
            }
            ans.push_back(put);
        }

        return ans;
    }
};
