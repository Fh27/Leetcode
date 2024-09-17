class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        string str;
        unordered_map<string,int>mp;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                mp[str]++;
                str="";
            }else{
                str+=s1[i];
            }
        }
        mp[str]++;
        str="";
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' ' ){
                mp[str]++;
                str="";
            }else{
                str+=s2[i];
            }
        }
        mp[str]++;
        for(auto x:mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
