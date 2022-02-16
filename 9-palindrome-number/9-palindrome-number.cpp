class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)      
            return false;
        int n=x;
        long long temp=0;
        while(n)           
        {
            temp*=10;
            temp+=n%10;
            n/=10;
        }
        return temp==x;   
    }
};