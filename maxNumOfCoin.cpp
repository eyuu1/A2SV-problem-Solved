class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin() , piles.end());
         int me=0, alice=0, bob=0;
         int i=piles.size()-1;
        int startIndex=0;
        while(i>0){
            alice+=piles[i];
            i--;
            me+=piles[i];
            bob+=piles[startIndex];
            startIndex=startIndex+1;
            i--;
            if(i==startIndex-1){
                break;
            }

        }
    return me;
    }
};
