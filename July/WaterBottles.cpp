class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            int emp=numBottles/numExchange;
            ans+=emp;
            int rem=numBottles%numExchange;
            numBottles=rem+emp;
        }
        return ans;

    }
};
