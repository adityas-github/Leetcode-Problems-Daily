class Solution {
public:
    int maxDistance(string s, int k) {
        int maxMD=0;
        int n = 0,st=0,e=0,w=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='N') n++;
            else if(s[i]=='S') st++;
            else if(s[i]=='E') e++;
            else if(s[i]=='W') w++;

            int curr = abs(e-w)+abs(n-st);
            int steps = i+1;
            int wasted = steps - curr;
            int extra = 0;
            if(wasted!=0){
                extra = min(2*k,wasted);
            }
            int finalCD = curr+extra;
            maxMD=max(maxMD,finalCD);
        }
            return maxMD;
    }
};