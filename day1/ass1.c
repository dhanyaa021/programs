#include<stdio.h>
//function to raed applicant deatils

void read_details(float* p_salary,int* p_score,int* p_experience){
    printf("Enter salary:");
    scanf("%f",p_salary);

    printf("Enter credit score:");
    scanf("%d",p_score);

    printf("Enter experience:");
    scanf("%d",p_experience);
}
//function to check loan eligibility
int isEligible(float salary,int score,int experience){
    return((salary>=30000)&&(score>=750)&&(experience>=2));
}
//main function begins here
int main()
{
    float salary;
    int score;
    int experience;
    
    //read applicant details
    read_details(&salary,&score,&experience);
    
    //check loan eligibility
    if(isEligible(salary,score,experince)){
        printf("Loan approved");
    }
    else{
        printf("Loan Rejected");
    }

    return 0;
}
