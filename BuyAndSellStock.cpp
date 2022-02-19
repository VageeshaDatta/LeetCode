//This approach was done in O(N) time complexity
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     //initilaizing maximum profit to 0;
        int max_profit = 0;

     //initializing  and assiging maximum value of int to min_price
     // so that every other price it sees is less than min_price   
        int min_price = INT_MAX;
     
     //iterating through the prices array only once   
      for(int i=0;i<prices.size();i++)
      {

      // if the current price of the stock is less than minimum 
      //we have seen till now , then updating the min_price
        if(prices[i] < min_price )
            min_price = prices[i];
      //if not then , then calcuating the max profit we can get 
      // by selling the stock we have bought for min_price.
      // maximum of previous max_profit and current max_profit     
        else{
           max_profit = max(max_profit, prices[i] - min_price);
        }
          
      }
       // returning the maximum profit 
        return max_profit;
        
    }
};