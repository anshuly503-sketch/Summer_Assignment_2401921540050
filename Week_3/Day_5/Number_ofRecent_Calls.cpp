class RecentCounter {
private:
    vector<int> calls;

public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        calls.push_back(t);
        int count =0;
        for (int time : calls){
            if (time >= t-3000 && time<=t){
                count++;
            }
        }
        return count;
    }
};
