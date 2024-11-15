//Prefix fixed code
#include<stdio.h>
//You can use given power function in your solution code(if required).
int power(int x,int y)
{
    int pow = 1;
    for (int j = 1; j <= y;j++)
    {
        pow *= x;
    }
    return pow;
}
//Write solution code below
//Solution Code

#include <math.h>
void BinaryToDecimal(long int B, int *D)
{
    // find no of digits
    // we use a loop to multiply value in position with 2^i
    long int temp=0;
    long int n = floor(log10(B) + 1);
    long int ans=0;
    //*D = n;

    for(int i = 0; i<=n; i++)
    {
        // somehow we isolate the digits. From the right
        temp = B % 10;
        B = B / 10;
        temp = temp * ((long int)(pow(2,i)));
        ans += temp;
        
    }
    
    *D = (int)ans;

}
// Suffix fixed Code
int main()
{
    long int B;
    int D;
    scanf("%ld",&B);    
    BinaryToDecimal(B, &D);
    printf("%d", D);
    return 0;
}