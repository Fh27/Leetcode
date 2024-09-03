int getLucky(string s, int k) {
        //tostring  //tostring   //stoi
    string si="";
    for(char ch:s){
        si+=to_string(ch-'a'+1);
    }
    while(k>0){
    int temp=0;
    for(char ch:si){
    temp+=ch-'0';
    }
    si=to_string(temp);
    k--;
    }
    return stoi(si);
        }
