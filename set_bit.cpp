ll setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    ll msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}
