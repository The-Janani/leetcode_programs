int mySqrt(int x)
{
    if (x == 0 || x == 1)
        return x;

    int i;
    for (i = 1; i <= x / i; i++)
    {
        if (i * i > x)
            return i - 1;
    }
    return i - 1;
}