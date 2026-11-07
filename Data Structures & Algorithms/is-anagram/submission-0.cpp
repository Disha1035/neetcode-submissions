class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char ,int> f;
        unordered_map<char ,int >f1;
         if (s.size() != t.size()) {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            f[s[i]]++;
        }
        for(int j=0; j<t.size() ;j++)
        {
            f1[t[j]]++;
        }
        if(f==f1)
        {
            return true;
        }
        return false;
    }
};