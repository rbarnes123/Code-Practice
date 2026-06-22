class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // holds frequency of letters in text
        int bCount = 0;
        map <char, int> letters = {{'b',0},{'a',0},{'l',0},{'o',0},{'n',0}};
        for(size_t i = 0; i < text.size(); i++){
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n'){
                letters[text[i]] +=1;
            }
        }
        // check if there enough letters for a balloon and update counts if there are 
        while(letters['b'] > 0){
            if(letters['b'] >=1 && letters['a'] >= 1 && letters['l'] >= 2 && letters['o'] >= 2 && letters['n'] >=1){
                bCount +=1;
                letters['b'] -= 1;
                letters['a'] -= 1;
                letters['l'] -= 2;
                letters['o'] -= 2;
                letters['n'] -= 1;
            }else{
                return bCount;
            }
        }
        return bCount;
    }
};