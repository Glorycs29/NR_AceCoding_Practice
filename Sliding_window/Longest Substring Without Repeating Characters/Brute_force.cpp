
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int res = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j,n; j++){
                if(uniqueAll(s,i,j)){
                    res = max(res, j-i+1);
                }
            }
        }
        return res;
    }

    bool uniqueAll(string &s, int start, int end){
        unordered_set<char> chars;

        for(int i=start; i<=end; i++){
            char c = s[i];
            if(chars.count(c)){
                return false;
            }
            chars.insert(c);
        }

        return true;
    }

};
