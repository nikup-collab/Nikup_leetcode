class MyCalendar {
public:
    vector<pair<int,int>> vect;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(const auto [s,e] : vect) {
            if(start < e and s < end) return false;
        }
        vect.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */