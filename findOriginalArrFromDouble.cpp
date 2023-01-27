class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
      vector<int>originalArray;
      queue<int>q;
      sort(changed.begin() , changed.end());  
        for(int num: changed){
            if(num == q.front()){
                originalArray.push_back(num/2);
                q.pop();
            }
            else{
                q.push(num*2);

            }
        }
    return q.empty() ? originalArray : vector<int>{};
    }};
