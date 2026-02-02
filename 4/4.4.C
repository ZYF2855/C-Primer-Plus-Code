#include <stdio.h>
void Temperatures(double Fahren);
int main(void)
{
    int a;
    while(1)
    {
        double fahren_tem;
        printf("Enter Fahren temperature:");
        a = scanf("%lf",&fahren_tem);
        if(a != 1) break;
        Temperatures(fahren_tem);
    }
    return 0;
}

void Temperatures(double Fahren) 
{
    const double Fahren_to_centi = 5.0/9.0;
    const double Centi_to_kelven = 273.16;
    double centi = Fahren_to_centi*(Fahren - 32.0);
    double kelven = centi + Centi_to_kelven;
    printf("Fahren temperature %.2f = centi temperature %.2f = kelven temperature %.2f\n",Fahren,centi,kelven);
}