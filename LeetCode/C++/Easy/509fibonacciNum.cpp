class Solution {
public:
    // build from the bottom  up
    int fib(int n) {
        vector<int> fibs(n + 1,0);
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        fibs[0] = 0;
        fibs[1] = 1;
        for(int i = 2; i < n + 1; i++){
          
            fibs[i] = fibs[i-1] + fibs[i-2];
            
        }
        return fibs[n];
    }
};