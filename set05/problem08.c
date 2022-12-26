#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n()
{
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    return n;
}

void input_n_fractions(int n, Fraction f[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Fraction %d:\n", i + 1);
        printf("Enter the numerator and denominator: ");
        scanf("%d %d", &f[i].num,&f[i].den);
    }
}

int find_gcd(int a, int b)
{
    if (b == 0)
        return a;
    return find_gcd(b, a % b);
}

Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum = f[0];
    for (int i = 1; i < n; i++)
    {
        int gcd = find_gcd(sum.den, f[i].den);
        int lcm = sum.den * f[i].den / gcd;
        sum.num = sum.num * (lcm / sum.den) + f[i].num * (lcm / f[i].den);
        sum.den = lcm;
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum)
{
    printf("The sum of the fractions is: %d/%d\n", sum.num, sum.den);
}

int main()
{
    int n = input_n();
    Fraction fractions[n];
    input_n_fractions(n, fractions);
    Fraction sum = add_n_fractions(n, fractions);
    output(n, fractions, sum);
    return 0;
}