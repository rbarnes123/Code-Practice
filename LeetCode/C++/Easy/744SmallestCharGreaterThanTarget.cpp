class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char smallest = '|';
        for (int i = 0; i < letters.size(); i++) {
            if (letters[i] <= smallest && letters[i] > target){
                smallest = letters[i];
            }
        }
        if (smallest == '|'){
            return letters[0];
        }
        else {
            return smallest;
        }
    }
};