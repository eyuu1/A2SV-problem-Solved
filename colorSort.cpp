class Solution {
public:
    void sortColors(vector<int>& nums) {
        int redCount=0,whiteCount=0, blueCount=0;
        vector<int>sortedColor;

       for(int i=0 ; i<nums.size() & i<300 ; i++){
           switch(nums.at(i)){
               case 0:
                redCount++;
                break;

                case 1:
                whiteCount++;
                break;

                case 2:
                blueCount++;
           }
       }
    
    for(int j=0 ; j<redCount ; j++){
        sortedColor.push_back(0);
    }

    for(int j=0 ; j<whiteCount ; j++){
        sortedColor.push_back(1);
    }

    for(int j=0 ; j<blueCount ; j++){
        sortedColor.push_back(2);
    }
    
    nums=sortedColor;
    }
};
