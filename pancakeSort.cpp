class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> ans;
        
        //skip curmax = 1 because 1 must be in correct place 
        // when all other elements all in correct place
        for(int curmax = A.size(); curmax >= 2; curmax--){
            int index = find(A.begin(), A.end(), curmax) - A.begin();
            //make index 1-based
            index += 1;
            // cout << curmax << ", " << index << endl;
            
            if(index > 1){
                //"last" is exclusive, so A[0], ..., A[index-1]
                reverse(A.begin(), A.begin() + index);
                // copy(A.begin(), A.end(), ostream_iterator<int>(cout, " "));
                // cout << endl;
                ans.push_back(index);
            }
            
            if(curmax > 1){
                //A[0], ..., A[curmax-1]
                reverse(A.begin(), A.begin() + curmax);
                // copy(A.begin(), A.end(), ostream_iterator<int>(cout, " "));
                // cout << endl;
                ans.push_back(curmax);
            }
            
        }
        
        return ans;
    }
};
