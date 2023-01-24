class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> q;
        for(auto& point:points){
            int x = point[0],y = point[1];
            int d = x*x + y*y;
            q.push({d,x,y});
            if(q.size()>k){
                q.pop();
            }
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back({q.top()[1],q.top()[2]});
            q.pop();
        }
        return ans;
    }
};
