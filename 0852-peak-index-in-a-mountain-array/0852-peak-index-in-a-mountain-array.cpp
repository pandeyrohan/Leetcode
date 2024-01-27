class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++){
            pq.push({arr[i],i});
        }class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int r= arr.size()-1;

        while(l<r){
            int m= l+ (r-l)/2;
            if(arr[m]>arr[m+1]){
                r=m;
            }
            else{
                l=m+1;
            }
        }
        return l;
    
    }
};
        return pq.top().second;
    }
};