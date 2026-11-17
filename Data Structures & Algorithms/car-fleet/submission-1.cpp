class Solution {
public:
    static bool comp(pair<int,int> p1, pair<int,int> p2){
        return p1.first<p2.first;
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n =speed.size();

        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            vp.push_back({position[i],speed[i]});
        }
        sort(vp.begin(),vp.end(),comp);
        
        double t=INT_MIN; 
        int c=0;
        for(int i=n-1;i>=0;i--){
            double time = (double)(target - vp[i].first) / vp[i].second;
            
            if(time>t) c++;

            t=max(t,time);
        }

        return c;
    }
};
