// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l=1,r=n,m;
        while(l<=r)
        {
            m=l+(r-l)/2;
            if(guess(m)==0)
                return m;
            else if(guess(m)==-1)
            {
                r=m-1;
            }
            else
                l=m+1;
        }
        return l;
    }
};
