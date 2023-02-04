class Solution {
public:
    bool isValid(string s) {
        stack<char>character;
        for(char str:s){
            if(str== '(' || str=='{'  || str=='['){
                character.push(str);
            }
            else if(character.empty()){
                return false;
            }
           
            else if(str==')' && character.top()!='(' 
                    ||  str=='}' && character.top()!='{'
                    ||  str == ']'  && character.top()!='['){
                return false;
            }
            else {
               character.pop();
            }
          
        
        }

        return character.empty();
    }
};
