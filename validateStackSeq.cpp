class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
      
  int lowerele=0;
        for(int i=0  ; i<pushed.size() ; i++){
      
               s.push(pushed[i]);
             
               while( !s.empty() && s.top()==popped[lowerele]){
                s.pop();
               
               lowerele++;
               } 


            
        }
        return s.empty();
    }
};
