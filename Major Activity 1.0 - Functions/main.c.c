#include <stdio.h>
float Ccharge(int, float);
float CsurCharge(int unit){
    float FsurCharge = 0.00;
    if(unit < 199 && unit > 0){
        FsurCharge = 1.50;
    }
    else if(unit < 450 && unit > 250){
        FsurCharge = 1.60;
    }
    else if(unit < 600 && unit > 450){
        FsurCharge = 1.85;
    }
    else if(unit > 600){
        FsurCharge = 2.00;
    }
    else{
        return -1;
    }
return FsurCharge;
}
float Ccharge(int unit, float surCharge){
    int Charge;
    Charge = unit * surCharge;
    return Charge;
}
float surChargeAmount(int ChargeB, float surCharge){
    float surchg;
    if (ChargeB > 300){
        surchg = ChargeB*15/150.0;
    }
    return surchg;
}
float total(int ChargeB, float surCh){
    float Total;
    if (Total < 100){
        Total = 100;
    }
    else {
        Total = ChargeB + surCh;
    }
    return Total;
}

int main (){
    int ID, unit, ChargeB;
    float surCharge, surCh, Totalam;
    printf("Input Costumer ID: ");
    scanf("%d", &ID);
    printf("Input the unit consumed by the costumer: ");
    scanf("%d", &unit);

    surCharge = CsurCharge(unit);
    ChargeB = Ccharge(unit, surCharge);
    surCh = surChargeAmount(ChargeB, surCharge);
    Totalam = total(ChargeB, surCh);

    printf("Costumer ID: %d\n", ID);
    printf("Unit Consumed: %d\n", unit);
    printf("Unit charges @P. %.2f per unit:%d\n", surCharge, ChargeB);
    printf("Surcharge Amount: %.2f\n", surCh);
    printf("Total: %.2f", Totalam);
    return 0;
}