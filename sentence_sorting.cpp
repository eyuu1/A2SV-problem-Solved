class Solution {
public:
    string sortSentence(string s) {
        istringstream iss(s);
        string word , newSentence="";
        vector<string> v(9);
        while(iss>>word){
            v.at(word.back()-'1')=word.substr(0 , word.size()-1);
        }

        for(int i=0 ; i<9 && v[i].size() ; i++){
            if(i>0)
            newSentence += " ";
            newSentence+=v.at(i);
        }

        return newSentence;
    }
};
