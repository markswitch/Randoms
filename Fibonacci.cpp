#include <bits/stdc++.h>
using namespace std;

int Rfibonacci(int n)
{
    if(n<=1)
        return n;
    return Rfibonacci(n-1)+Rfibonacci(n-2);

}
int F[20];
int RfibonacciFast(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2] = RfibonacciFast(n-2);
        if(F[n-1]==-1)
            F[n-1] = RfibonacciFast(n-1);
        return F[n-1]+F[n-2];

    }
}
int main()
{
    cout << Rfibonacci(14);
    return 0;
}
