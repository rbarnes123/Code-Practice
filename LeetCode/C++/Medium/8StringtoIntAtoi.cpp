#include<string>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long iVal = 0;

        s = lStrip(s);
        // set sign
        if (s[i] == '-'){
            sign = -1;
            i++;
        }else if(s[i] == '+'){
            i++;
        }
        // convert to integer using a shift
        while (s[i] >= '0' && s[i] <= '9'){
            if(isalpha(s[i])){
                break;
            }
            // round if num would be to large to fit an integer
            if (iVal * 10 + s[i] - '0'> 2147483647){
                if (sign == -1) {
                    iVal = -2147483648;
                    return iVal;
                }else{
                    iVal = 2147483647;
                    return iVal;
                }
            }
            iVal = (iVal * 10) + (s[i] - '0');
            i++;
        }
        iVal = sign * iVal;
        return iVal;   
    }
    // removes leading whitespace
    string lStrip(string s){
        for(int i = 0; i < s.length(); i++){
            if (s[i]!= ' '){
                s = s.erase(0,i);
                return s;
            }
        }
        return s;
    }
};