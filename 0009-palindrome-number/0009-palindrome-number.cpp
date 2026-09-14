class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
            
        long r,ans,cpy;
        cpy=x;
        while(x!=0){
            r=x%10;
            ans=ans*10+r;
            x=x/10;
        }
        if(ans==cpy)
            return true;

        return false;

    }
};