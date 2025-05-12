class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
      unordered_set<int>s;
      int n = digits.size();
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i==j || j==k || k==i){
                    continue;
                }
                int nu = digits[i]*100 + digits[j]*10 + digits[k];
                if(nu>=100 && nu%2==0){
                    s.insert(nu);
                }
            }
        }
      }  
        vector<int>res(s.begin(),s.end());
        sort(res.begin(),res.end());
        return res;
    }
};