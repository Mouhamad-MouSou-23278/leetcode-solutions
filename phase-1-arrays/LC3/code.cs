using System; 

using System.Collections.Generic ; 

class Program
{
    static int LengthOfLongestSubstring(string s)
    {
        Dictionary<char , int> map = new Dictionary<char , int>(); 
        
        int l = 0 , max = 0 ; 
        for(int r = 0 ; r < s.Length ; r++)
        {
            if(map.ContainsKey(s[r]) && map[s[r]] >= l)
            {
                l = map[s[r]] + 1 ; 
            }
            
            map[s[r]] = r; 
            max = Math.Max(max , r - l + 1 ); 
        }
        return max ; 
    }

static void Main()
{
    Console.WriteLine(LengthOfLongestSubstring("abcabcbb"));
}
}