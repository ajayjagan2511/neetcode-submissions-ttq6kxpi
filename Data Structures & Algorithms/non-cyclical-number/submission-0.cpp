class Solution {
public:
    bool isHappy(int n) {
        unordered_map <int,int>mp;
        while(true){
            if(n==1)
            return true;
            if(mp[n]>0)
            return false;
            mp[n]++;
            int curr=1,n2=0;
            while(curr<=n){
                int val=n/curr;
                val=val%10;
                n2+=val*val;
                curr*=10;
            }
            n=n2;
        }
        return false;
    }
};
