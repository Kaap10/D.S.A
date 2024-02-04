//Implement a min stack
class MinStack {
    public:
    vector<pair<int, int>>st;
    MinStack() {

    }

    void push(int val) {
        if(st.empty()) {
            pair<int, int> p = make_pair(val, val);
            st.push_back(p);
        }
        else {
            pair<int, int> p;
            p.first = val;
            int puranaMin = st.back().second;
            p.second = min(puranaMin, val);
            st.push_back(p);    
         }
    }

    void pop() {
        if(s.empty()) {
            return;
        }
        else {
            st.pop_back();
        }
    }

    int top() {
        if(s.empty()) {
            return NULL;
        }
        else {
            pair<int, int> rightMostPair = st.back();
            return rightMostPair.first;
        }
    }

    int getMin() {
        if(st.empty()) {
            return NULL;
        }

        else {
            pair<int, int> rightMostPair = st.back();
            return rightMostPair.second;
        }
    }
}