#include <vector>
#include <unordered_map>
#include <queue> 
#include <functional>

using namespace std; 


vector<int> tokKFrequent(vector<int>& nums , int k)
{
    unordered_map<int , int> f; 


    for(int num : nums )
    {
        f[num]++; 
    }


    using Pair = pair<int , int> ; 

    priority_queue<Pair , vector<Pair>, greater<Pair>> heap; 


    for(auto& [num , freq] : f)
    {
        if(heap.size() < k)
        {
            heap.push({freq , num}); 
        }
        else if(freq > heap.top().first)
        {
            heap.pop(); 
            heap.push({freq , num }); 
        }
    }


    vector<int> result ;
    while(!heap.empty())
    {
        result.push_back(heap.top().second); 
        heap.pop(); 
    }

    return result ; 
}