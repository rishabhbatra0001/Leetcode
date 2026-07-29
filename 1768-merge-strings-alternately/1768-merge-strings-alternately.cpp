class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string A;
        int a = word1.length();
        int b = word2.length();
        int i = 0;
        while (i < a || i < b){
            if (i < a)A+=word1[i];
            if (i < b)A+=word2[i];
            i++;
        }
        return A;
    }
};