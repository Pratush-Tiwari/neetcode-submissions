

class MinStack {
private:
    std::stack<int> st;
    std::stack<int> minSt;

public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
        else minSt.push(minSt.top());
    }
    
    void pop() {
        if (st.empty()) return;
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};


// class MinStack {
// public:
//     vector<int> vp;
//     vector<int> vpmin;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         vp.push_back(val);
//         int n=vpmin.size();
//         if(n>0 && val<vpmin[n-1]){
//         vpmin.push_back(val);
//         }
//         else if(n==0) vpmin.push_back(val);
//         else vpmin.push_back(vpmin[n-1]);
//     }
    
//     void pop() {
//         vp.pop_back();
//         vpmin.pop_back();
//     }
    
//     int top() {
//         int n=vp.size();
//         return vp[n-1];
//     }
    
//     int getMin() {
//         int n=vp.size();
//         return vpmin[n-1];
//     }
// };

