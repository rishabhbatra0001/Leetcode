class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[256]{};
        for (int i = 0 ; s[i] != '\0' ; i++){
            int ce = s[i];
            freq[ce]++;
        }

        for (int i = 0 ; t[i] != '\0' ; i++){
            int ce = t[i];
            freq[ce]--;
        }

        for (int i = 0 ; i < 256 ; i++){
            if (freq[i] != 0)return false;
        }
        return true;
    }
};