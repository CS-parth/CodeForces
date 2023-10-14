#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string st;
    int n;
    
    bool rec(int index, int level, string str, vector<string>& wordDict) {
        if (level == n || index == st.size()) {
            return str == st ? true : false;
        }
        int size = wordDict[level].size();
        string sb = st.substr(index, size);

        if (wordDict[level] == sb) {
            if (rec(index + size, level + 1, str + sb, wordDict)) {
                return true;
            }
            if (rec(index, level + 1, str, wordDict)) {
                return true;
            }
        } else {
            if (rec(index, level + 1, str, wordDict)) {
                return true;
            }
        }
        return false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        n = wordDict.size();
        st = s;
        return rec(0, 0, "", wordDict);
    }
};

int main() {
    Solution solution;

    string s = "leetcode";
    vector<string> wordDict = { "leet", "code" };

    if (solution.wordBreak(s, wordDict)) {
        cout << "String can be segmented." << endl;
    } else {
        cout << "String cannot be segmented." << endl;
    }

    return 0;
}
