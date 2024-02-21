class Solution {
public:
        int func(int n){
            int res = 0;
            while(n!=0){
                int rem = n%2;
                if(rem == 1)
                    res++;
                n/=2;
            }
            return res;
        }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto it: arr){
            int res = func(it);
            pq.push({res,it});
        }
        while(!pq.empty()){
            res.emplace_back(pq.top().second);
            pq.pop();
        }
        return res;
        
    }
};