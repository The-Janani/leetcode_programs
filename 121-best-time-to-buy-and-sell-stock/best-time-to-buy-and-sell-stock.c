int maxProfit(int* prices, int pricesSize)
{
int i,max=0;
int min=prices[0];
for(i=0;i<pricesSize;i++)
{
    if(prices[i]<min)
    {
        min=prices[i];
    }
    int profit=prices[i]-min;
    if(max<profit)
    {
       max=profit;
    }
}
return max;   
}