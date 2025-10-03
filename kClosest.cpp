class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int,vector<int>>>pq;
        for(auto arr:points)
        {
            pq.push({arr[0]*arr[0]+arr[1]*arr[1],arr});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<vector<int>>sol;
        while(k--)
        {
            sol.push_back(pq.top().second);
            pq.pop();
        }
        return sol;
    }
};
