class StockSpanner {
stack<pair<int,int>> s;
vector<int> ans;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.empty()){
            s.push({price,0});
        }
        int res = 0;
        while(!s.empty() && s.top().first<=price){
            res = res + s.top().second;
            s.pop();
        }
        res++;
        s.push({price,res});
        ans.emplace_back(s.top().second);
        return res;
    }
};
