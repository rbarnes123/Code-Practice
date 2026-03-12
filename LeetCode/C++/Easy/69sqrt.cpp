class Solution {
public:
    int mySqrt(int x) {
        // make number positive
        if(x < 0){
            x *= -1;
        }
        // find first closest square to x
        long squareCounter = 0;
        long square = 0;
        while(true){
            square = squareCounter * squareCounter;
            if (square < x){
                if(((squareCounter + 1)*(squareCounter + 1)) <= x){
                    squareCounter += 1;
                }
                else{
                    return squareCounter; 
                }
            }
            else{
                return squareCounter;
            }
        }
        return squareCounter;
    }
};