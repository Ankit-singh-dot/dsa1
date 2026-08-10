class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp;
       int xr = 0 ;
       int count = 0 ;
       mp[0] = 1 ;
       for(int i = 0 ; i < n ; i ++){
           xr = xr ^ arr[i];
           int need = xr ^ k ;
           if(mp.find(need) != mp.end()) {
        count += mp[need];
    }
        mp[xr]++;
       }
    return count ; 
    }
};


