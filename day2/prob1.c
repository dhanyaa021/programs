#include<stdio.h>
#include<string.h>

void patient_input(char *name,char *ward,int days){
    printf("Enter patient name:");
    scanf("%s",name);

    printf("Enter type of ward:");
    scanf("%s",ward);

    printf("Enter number of days spent:");
    scanf("%d",&days);
}

//calculate bill
float calculateBill(char *ward,int days){
    float bill,total_bill,discount;
    if(strcmp(ward,"General Ward")==0){
        bill=1000*days;
    }
    else if(strcmp(ward,"Semi-private")==0){
        bill=2000*days;

    }
    else if(strcmp(ward,"Private")==0){
        bill=5000*days;
    }
    
    
    if(days>7){
        discount=(bill*0.05);
        total_bill=(bill)-discount;
    
    }
    else{
        total_bill=bill;
    }
    return total_bill;
}
int main(){
    char name[10];
    char ward[50];
    int n,days;
    float bill,total_bill,discount;
    //read patient_input
    patient_input(name,ward,days);
    //calculate the bill

    calculateBill(ward,days);
    printf("Total bill before discount:%.2f",bill);
    printf("Discount:%.2f",discount);
    printf("Final bill:%.2f",total_bill);

    return 0;
}
