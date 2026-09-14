class Solution {
public:
    double f(double x, long long n){
        if(n==0){
            return 1;
        }
        double half=f(x,n/2);

        if(n%2==0){
            return half*half;
        }
        
        return x*half*half;
        
    };

    double myPow(double x, int n) {
        //long long X = x;
        long long N = n;
        if(n<0){
            N=-N;
            x=1/x;
        }
        if(N==1){
            return x;
        }
        if(x==0){
            return 0;
        }

        return f(x,N);

    }
};