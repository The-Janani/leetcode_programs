int subtractProductAndSum(int n)
{
   int sum=0,mult=1,num;
   while(n!=0) 
   {
    num=n%10;
    sum=sum+num;
    mult=mult*num;
    n=n/10;
   }
   return mult-sum;
}