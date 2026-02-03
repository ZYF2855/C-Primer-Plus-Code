#include <stdio.h>
int main(void)
{
    float Daphne = 100;
    float Deirdre = 100;
    float Daphne_acc = 100 * 0.1;
    float Deirdre_acc  = 100 * 0.05;
    int i = 0;
    while(1)
    {
        i++;
        Daphne += Daphne_acc;
        Deirdre_acc = (Deirdre + Deirdre_acc)*0.05;
        Deirdre += Deirdre_acc;
        if(Deirdre>Daphne)
        {
            printf("%d,Deirdre:%.2f,Daphne:%.2f",i,Deirdre,Daphne);
            break;
        }
    }
    return 0;
}