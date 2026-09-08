#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std; 

vector<int> twoSum(vector<int>& arr, int target) 
{
    int sum , r , l ; 
    
    r = arr.size() -  1 ;
    l = 0 ; 
    
    while(l < r)
    {
        sum = arr[l] + arr[r]; 
        
        if(sum  < target)
        {
            l++; 
        }
        if(sum > target)
        {
            r--; 
        }
        if(sum == target)
        {
            return {l , r};
        }
    }
    return {-1 ,-1} ;
}

int main()
{
    vector<int> i = {2,7,11,15}; 
    auto sl = twoSum( i  , 9); 
    for(int s : sl)
    {
        cout <<  s << endl; 
    }
    cout << "sousou is the bset " <<endl; 
}