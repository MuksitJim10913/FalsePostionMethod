#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000

double func(double x)
{
    double p = 667.38/x;
    double q = (1 - exp(-(.146843*x)));
    return p*q-40;;
}

void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;

    for (int i=0; i <= MAX_ITER; i++)
    {

        c = (a*func(b) - b*func(a))/ (func(b) - func(a));


        if (func(c)==0)

            break;


        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}


int main()
{
    double a,b;
    printf("value of XL and Xu: ");
    scanf("%lf %lf",&a,&b);
    regulaFalsi(a, b);
    return 0;
}
