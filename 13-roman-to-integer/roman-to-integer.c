int value(char c)
{
    switch(c)
    {
    case('I'):
    return 1;
    case('V'):
    return 5;
    case('X'):
    return 10;
    case('L'):
    return 50;
    case('C'):
    return 100;
    case('D'):
    return 500;
    case('M'):
    return 1000;
    default:
    return 0;
    }
}  
int romanToInt(char* s)
 {
    int sum=0;
    for(int i=0;s[i]!='\0';i++)
    {
      int currentsum=value(s[i]);
      int nextsum=value(s[i+1]);
      if(currentsum<nextsum)
      {
         sum=sum-currentsum;
      }
      else
      {
        sum=sum+currentsum;
      }
    }
    return sum;
   
}