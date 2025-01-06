class Solution {
public:
    int candy(vector<int>& ratings) {
        int totalCandes = 0;
        int n = ratings.size();
        vector<int> candes(n, 1);

        for(int i = 1; i < n; i++){
            if(ratings[i] > ratings[i - 1]){
                candes[i] = candes[i - 1] + 1;
            }
        }

        for(int i = n - 2; i >= 0; i--){
            if(ratings[i] > ratings[i + 1]){
                candes[i] = max(candes[i], candes[i + 1] + 1);
            }
        }
       

        for(int ca : candes){
            totalCandes += ca;
        }

        return totalCandes;
    }
};