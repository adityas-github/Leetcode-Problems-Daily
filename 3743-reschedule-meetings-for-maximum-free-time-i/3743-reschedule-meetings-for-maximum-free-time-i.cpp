class Solution {
public:
    int maxFreeTime(int e, int k, vector<int>& sT, vector<int>& eT) {
       vector<int>g;
       g.push_back(sT[0]);
       for(int i=1;i<sT.size();i++){
        g.push_back(sT[i] - eT[i-1]);
       } 
       g.push_back(e - eT[eT.size()-1]);
       int i=0,j=0,curr=0,ans=0;
       while(j<g.size()){
        curr+=g[j];
        if(j-i>k){
            curr-=g[i];
            i++;
        }
        ans=max(ans,curr);
        j++;
       }
       return ans;
    }
};