/*

// problem solving from BeeCrowd





#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}                   // prob Bee 1000 	Hello World!











#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d %d", &A, &B);
    X = A + B;
    printf("X = %d\n", X);
    return 0;
}     // prob Bee 1001   Extremely Basic











#include<stdio.h>
int main()
{
    double R, A;
    scanf("%lf", &R);
    A = 3.14159 * R * R;
    printf("A=%.4lf\n", A);
    return 0;
}               // prob Bee 1002  Area of a Circle










#include<stdio.h>
int main()
{
    int A,B,SOMA;
    scanf("%d %d", &A, &B);

    SOMA = A+B;
    printf("SOMA = %d\n", SOMA);
    return 0;
}               // prob bee  1003  Simple Sum











#include<stdio.h>
int main()
{
    int i,j,PROD;
    scanf("%d %d", &i, &j);

    PROD = i*j;
    printf("PROD = %d\n", PROD);
    return 0;
                //  prob bee  1004  Simple Product
}










#include<stdio.h>
int main()
{
    double A,B,M;
    scanf("%lf %lf", &A, &B);

    M = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf\n", M);
    return 0;
}                   //  prob bee 1005  Average 1












#include<stdio.h>
int main()
{
    double A,B,C,M;
    scanf("%lf %lf %lf",&A,&B,&C);
    M = ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1lf\n", M);
    return 0;
}            //  prob bee  1006  Average 2










#include<stdio.h>
int main()
{
    int A,B,C,D,E;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    E = (A*B-C*D);
    printf("DIFERENCA = %d\n", E);
    return 0;
}               //  prob bee 1007 Difference














#include<stdio.h>
int main()
{
    int number, hours;
    float amount, salary;
    scanf("%d %d", &number, &hours);
    scanf("%f", &amount);
    salary = hours*amount;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}                //  prob bee 1008 Salary















#include<stdio.h>
int main()
{
    char name[100];
    double salary, proMoney, bonus, total;
    scanf("%s",&name);
    scanf("%lf %lf", &salary, &proMoney);
    bonus = proMoney * 0.15;
    total = salary + bonus;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;     //  prob bee 1009 Salary with bonus
}











#include<stdio.h>
int main()
{
    int p1,p2,unit1,unit2;
    double price1,price2,p1multi,p2multi,fvalue;

    scanf("%d %d %lf",&p1,&unit1,&price1);
    scanf("%d %d %lf",&p2,&unit2,&price2);

    p1multi = unit1 * price1;
    p2multi = unit2 * price2;

    fvalue = (p1multi + p2multi);

    printf("VALOR A PAGAR: R$ %.2lf\n", fvalue);
    return 0;
}                   //  prob bee 1010 Simple Calculate















#include<stdio.h>
int main()
{
    double pi, r, volume;
    pi=3.14159;
    scanf("%lf", &r);
    volume = ((4/3.0)*pi*(r*r*r));
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}               // prob bee 1011  sphere
















#include <stdio.h>
int main()
{
    double A,B,C,triang,circ,trap,quadr,rectan;
    scanf("%lf %lf %lf",&A,&B,&C);

    triang = A*C/2;
    circ = 3.14159*C*C;
    trap = C*(A+B)/2;
    quadr = B*B;
    rectan = A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triang,circ,trap,quadr,rectan);
    return 0;
}                       // prob bee 1012  Area












#include<stdio.h>
int main()
{
    int a,b,c,ab,abc;
    scanf("%d %d %d",&a,&b,&c);
    ab = (a+b+abs(a-b))/2;
    abc = (ab+c+abs(ab-c))/2;
    printf("%d eh o maior\n",abc);
    return 0;
}            // prob bee 1013  The greatest













#include<stdio.h>
int main()
{
    int x;
    double y, con;
    scanf("%d %lf",&x,&y);

    con = x/y;

    printf("%.3lf km/l\n", con);
    return 0;
}               // prob bee 1014  consumption
















#include<math.h>
#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,distance;
    scanf("%f %f\n %f %f",&x1,&y1,&x2,&y2);

    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("%.4f\n",distance);
    return 0;
}                   //prob bee 1015  Distance Between Two Points















#include<stdio.h>
int main()
{
    int x,t;
    scanf("%d",&x);
    t = x*2;
    printf("%d minutos\n",t);
    return 0;
}                   //prob bee 1016   Distance














#include<stdio.h>
int main()
{
    int time, speed;
    double liters, fuel=12;
    scanf("%d %d",&time,&speed);
    liters = (time*speed)/fuel;
    printf("%.3lf\n", liters);
    return 0;
}               // prob bee 1017  Fuel Spent
















#include<stdio.h>
int main()
{
    int n, div, remain, i;
    int ara[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &n);

    if(n>0 && n<1000000)
        {
            printf("%d\n", n);

    for(i = 0; i < 7; i++)
        {
            div = n/ara[i];
            remain = n%ara[i];
            n = remain;
            printf("%d nota(s) de R$ %d,00\n", div, ara[i]);
        }
    }
    return 0;
}                   // prob bee  1018	Banknotes















#include <stdio.h>

int main()
{
    int seconds, hours, minutes;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds-(hours * 3600))/ 60;
    seconds = seconds - (minutes * 60);

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}               // prob bee 1019 Time Conversion















#include<stdio.h>

int main()
{
    int years, months, days;

    scanf("%d", &days);

    years = days / 365;

    months = days % 365 / 30;

    days = days % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}                       // prob bee 1020 - Age in Days

















#include<stdio.h>
int main()
{
    float a,b;
    int n,m;

    scanf("%f",&a);
    n=(int)a;
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n",n/100);

    n=n%100;

    printf("%d nota(s) de R$ 50.00\n",n/50);

    n=n%50;

    printf("%d nota(s) de R$ 20.00\n",n/20);

    n=n%20;

    printf("%d nota(s) de R$ 10.00\n",n/10);

    n=n%10;

    printf("%d nota(s) de R$ 5.00\n",n/5);

    n=n%5;

    printf("%d nota(s) de R$ 2.00\n",n/2);

    n=n%2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",n);

    b=a-n;
    m=round(b*100);

    printf("%d moeda(s) de R$ 0.50\n",m/50);

    m=m%50;

    printf("%d moeda(s) de R$ 0.25\n",m/25);

    m=m%25;

    printf("%d moeda(s) de R$ 0.10\n",m/10);

    m=m%10;

    printf("%d moeda(s) de R$ 0.05\n",m/5);

    m=m%5;

    printf("%d moeda(s) de R$ 0.01\n",m/1);

    return 0;
}                           // prob bee Banknotes and coins















#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((b > c) && (d > a) && (c + d > a + b) && c > 0 && d > 0 && (a % 2 == 0))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}                      // prob bee 1035 selection test
















#include<stdio.h>
#include <math.h>

int main()
{
    double a, b, c, t;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(((b * b) - 4 * a * c) < 0 || a == 0)
        {
            printf("Impossivel calcular\n");
        }

    else
        {
            t = sqrt((b * b) - 4 * a * c);
            printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + t) / (2 * a)), ((-b - t) / (2 * a)));
        }

    return 0;
}                   // prob bee 1036	Bhaskara's Formula















*/




#include<stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    if(n < 0 || n > 100)
    {
        printf("Fora de intervalo\n");
    }
    else
    {
        if(n >= 0 && n <= 25)
        {
            printf("Intervalo [0,25]\n");
        }
        else if(n > 25 && n <= 50)
        {
            printf("Intervalo (25,50]\n");
        }
        else if(n > 50 && n <= 75)
        {
            printf("Intervalo (50,75]\n");
        }
        else
        {
            printf("Intervalo (75,100]\n");
        }
    }

    return 0;
}                  // prob bee  1037	Interval









