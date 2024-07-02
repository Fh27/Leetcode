class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int maxx=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]&1) {
                cnt++;
                maxx=max(maxx,cnt);
            }
            else{
                cnt=0;
            }
        }
        if(maxx>=3) return true;
        else return false;
    }
};
