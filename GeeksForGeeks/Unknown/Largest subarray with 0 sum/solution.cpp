class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n = arr.size();
        unordered_map<long long ,int > mp ;
        long long sum = 0;
        int maxi = 0;
        mp[0] = - 1 ;
        for(int i = 0 ; i<n ; i++){
            sum += arr[i];
            if(mp.find(sum) != mp.end()){
                int length = i - mp[sum];
                maxi = max(maxi, length);
            }
            else {
                mp[sum] = i;
            }
        }
        return maxi ; 
    }
};