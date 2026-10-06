class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase_count = 0 ;
        for(int i = 0 ; i< word.size() ; i++){
            if(isupper(word[i])){
                uppercase_count++ ;
            }
        }
        if(uppercase_count == word.size() ||
           uppercase_count == 0 ||
           (uppercase_count == 1 && isupper(word[0]))) {
            return true;
        }
        return false ;
    }
};