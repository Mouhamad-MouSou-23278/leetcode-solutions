class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> map; 
        int l = 0 , maxlen = 0 ; 

        for(int r = 0 ; r < s.size() ; r++)
        {
            if(map.count(s[r]) && map[s[r]] >= l)
            {
                l = map[s[r]] + 1 ; 
            }
            map[s[r]] = r; 
            maxlen = max(maxlen , r  - l  + 1);  
        }
        return maxlen; 
    }
};