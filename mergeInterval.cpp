class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> correctInterval;
        vector<int> tempInterval=intervals[0];

        for(auto& point : intervals){
           if(point[0]<=tempInterval[1]){
               tempInterval[1]=max(point[1], tempInterval[1]);
              
               }
            else{
                correctInterval.push_back(tempInterval);
                tempInterval=point;
            } 
        }
        correctInterval.push_back(tempInterval);
        return correctInterval;
    }
};
