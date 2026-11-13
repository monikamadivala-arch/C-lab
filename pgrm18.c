# include <stdio.h>
int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b)
{
    return(a/gcd(a,b))*b;
}
unsigned long long factorial(int n)
{
    if(n<=1)
    return 1;
    return n* factorial (n-1);
}
long long power (int x,int n)
{
    if(n==0)
    return 1;
    return x* power(x,n-1);
}
int main()
{
    int choice,a,b,n,x;
    printf("1.gcd\n");
    printf("2.lcm\n");
    printf("3.factorial using recursion\n");
    printf("4.x raised to n using recursion\n");
    printf("enter vyour choice:");
    scanf("%d", & choice);
    switch(choice)
    {
        case 1:
        printf("enter tow positive integers:");
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0)
        printf("enter positive integers only\n");
        else
        printf("gcd=%d\n",gcd(a,b));
        break;
        case 2:
        printf("enter two positive integers:");
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0)
        printf("enter positive integers only.\n");
        else
        printf("lcm=%d\n",lcm(a,b));
        break;
        case 3:
        printf("enter anon-negative integer from 0 to 20:");
        scanf("%d",&n);
        if(n<0||n>20)
        printf("enter a value from 0 to 20.\n");
        else
        printf("factorial = %llu\n",factorial(n));
    break;
    case 4:
    printf("enter x and a non-negative power:");
    scanf("%d%d",&x,&n);
    if(n,0)
    printf("power must be non-negative.\n");
    else
    printf("result=%llu\n",power(x,n));
    break;
    defait:
    printf("invalid choice.\n");
    }
    return 0;
}




    

    


    
    

