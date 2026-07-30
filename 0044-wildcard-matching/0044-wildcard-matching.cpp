class Solution {
public:
  int dp[2001][2001];

  bool F(string &s, string &p, int x, int y) {

    // Whenever I am at a new state :
    // Check if this state has previously been calculated or not.
    if (dp[x][y] != -1) {
      return dp[x][y];
    }

    if (x == 0 and y == 0) {
      return dp[x][y] = 1;
    }

    if (y == 0 and x > 0) {
      return dp[x][y] = 0;
    }

    if (x == 0 and y > 0) {
      while (y > 0) {
        if (p[y - 1] != '*') {
          return dp[x][y] = 0;
        }
        y--;
      }
      return dp[x][y] = 1; // Saare "*" the.
    }

    if (s[x - 1] == p[y - 1] or p[y - 1] == '?') {
      return dp[x][y] = F(s, p, x - 1, y - 1);
    } else if (p[y - 1] == '*') {

      bool Op1 = F(s, p, x - 1, y);
      bool Op2 = F(s, p, x, y - 1);

      // Current State : F(s,p,x,y) : Iska answer will be true if Op1 or Op2 is
      // true.
      return dp[x][y] = (Op1 or Op2);
    }

    // If I am here : p[y-1] is not "*","?" and also p[y-1] != s[x-1]
    return dp[x][y] = 0;
  }

  bool isMatch(string s, string p) {
    int n = s.length();
    int m = p.length();

    memset(dp, -1, sizeof(dp));
    // Ek kadam aage se call kar rahe hain.
    return F(s, p, n, m);
  }
};