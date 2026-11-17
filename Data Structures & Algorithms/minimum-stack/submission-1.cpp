

class MinStack {
private:
    std::stack<int> st;
    std::stack<int> minSt;

public:
    MinStack() {
        // Constructor initializes the stacks automatically
    }
    
    void push(int val) {
        st.push(val);
        // Push onto minSt if it's empty or val is less than or equal to the current minimum
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (st.empty()) return;
        
        // If the top element of the main stack is the current minimum, remove it from minSt too
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
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

