class Solution {
public:
    int minDeletion(string s, int k) {
       map<char,int>m;
       for(int i=0;i<s.length();i++){
        m[s[i]]++;
       } 
       vector<int>v;
       for(auto i:m){
        v.push_back(i.second);
       }
       sort(v.begin(),v.end());
       int si=v.size();
       int d = si-k;
       if(d<=0){
        return 0;
       }
       else{
        int a = 0,i=0;
        while(d--){
            a+=v[i];
            i++;
        }
        return a;
       }
    }
};