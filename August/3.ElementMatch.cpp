class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=target.size();
        unordered_map<int,int>mp;
        for( int i=0;i<n;i++)
        {
            mp[target[i]]++;
        }
        for( int j=0;j<n;j++){
            mp[arr[j]]--;
        }
        for(auto it:mp){

        if(it.second!=0){
            return false;
        }
        }
        return true;
    }
};
