#include <string>
class Solution {
public:
    bool judgeCircle(string moves) {
        char move = ' ';
        int x = 0;
        int y = 0;
        for(int i = 0; i < moves.length(); i++){
            move = moves[i];
            switch (move) {
                case 'U':
                    y +=1;
                    break;
                case 'D':
                    y -= 1;
                    break;
                case 'L':
                    x -= 1;
                    break;
                case 'R':
                    x += 1;
                    break;
                default:
                    break;
            }
        }
        if (x == 0 && y == 0){return true;}
        else{return false;}
    }
};