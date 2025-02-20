#include<stdio.h>
//structure representation of employees
struct Employee_t{
    int id;
    char name[25];
    float salary;
    char department[25];
};

typedef struct Employee_t Employee;
void readEmployees(Employee emp[],int n);
void displayEmployee(Employee emp[],int n);
void saveEmployees(Employee emp[],int n);
void loadEmployees(Employee emp[],int n);
Employee findHighestSalary(Employee emp[],int n);

//main function
int main(){
int employeecount,count;
printf("Enter number of employees:");
scanf("%d",&employeecount);
Employee employees[1000];
readEmployees(employees,employeecount);
displayEmployee(employees,employeecount);
saveEmployees(employees,employeecount);
loadEmployees(employees,employeecount);
Employee highestSalariedemployee =findHighestSalary(employees,employeecount);
printf("Employee with highest salary:%s,%.2f(%s)\n",highestSalariedemployee.name,highestSalariedemployee.salary,highestSalariedemployee.department);

    return 0;
}
//fucntion to read employees
void readEmployees(Employee emp[],int n){
    int i;
    printf("Enter %d employee details",n);
    for(i=0;i<n;i++){
        scanf("%d%s%f%s",&emp[i].id,emp[i].name,&emp[i].salary,emp[i].department);
    }
}
//function to display employees
void displayEmployee(Employee emp[],int n){
    printf("\n\nID\tNAME\tSALARY\tDEPT\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%f\t%s\n",emp[i].id,emp[i].name,emp[i].salary,emp[i].department);
        printf("\n");
}
}
//function to find highest salary
Employee findHighestSalary(Employee emp[],int n){
    Employee highestSalaried=emp[0];
    for(int i=0;i<n;i++){
        if(emp[i].salary>highestSalaried.salary){
            highestSalaried=emp[i];
        }
    }
    return highestSalaried;

}
//function to read employees from text file
void saveEmployees(Employee emp[],int n){
    FILE* file=fopen("employees.txt","w");
    if(file==NULL){
        printf("Cannot create file.\n");
        return;
    }
    //
    for(int i=0;i<n;i++){
        fprintf(file,"%d%s%.2f%s\n",emp[i].id,emp[i].name,emp[i].salary,emp[i].department);
    }
    //
    fclose(file);
}

void loadEmployees(Employee emp[],int n){
    FILE* file=fopen("employee.txt","r");
    if(file==NULL){
        printf("Cannot read file.\n");
        return;
    }
    //
    for(int i=0;i<n;i++){
        fscanf(file,"%d%s%f%s\n",&emp[i].id,emp[i].name,&emp[i].salary,emp[i].department);
    }
    //
    fclose(file);
}
