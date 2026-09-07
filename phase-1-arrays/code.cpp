class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min_price = INT_MAX; 
        int max_profit = 0 ; 

        for(int p : prices)
        {
            if(min_price > p)
            {
                min_price = p ;
            }

            int current_profit = p - min_price ; 

            if(max_profit < current_profit){
                max_profit = current_profit ; 
            }

        } 
        return max_profit ; 
    }


};