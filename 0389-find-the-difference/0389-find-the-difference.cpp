class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        for (int j = 0 ; j < t.length() ; j++){
            if (s[j] != t[j])return t[j];
        }
       return 's'; 
    }
};