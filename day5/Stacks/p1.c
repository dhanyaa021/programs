//main fucntion

#include<stdio.h>
#include "employee.h"
#include "stack.h"
void StackInit(Stack* stk){
    stk->_size=0;
    stk->_top=-1;
}
ElementType StackTop(Stack* stk){
    return stk->_elements[stk->_top];
}

int StackEmpty(Stack* stk){
    return (stk->_top==-1);
}
 void StackPush(Stack* stk,ElementType element){
    stk->elements[stk->_size]=element;
    stk->_size++;
    stk->_top++;
 }

void StackPop(Stack* stk,ElementType element){
    if(stackEmpty(stk)){
        printf("Stack Empty\n");
        return;
    }
    stk->_size
}
int main(){

    return 0;
}

//employee.h\
#ifndef EMPLOYEE_HEADER
#define EMPLOYEE_HEADER
struct Employee_t{
    int id;
    char name[255];
    float salary;
    char department[50];
};
typedef struct Employee_t Employee;
#endif


//stack

#include "Employee.h"
#ifndef STACK_HEADER
#define STACK_HEADER
#define STACK_SIZE 1000
typedef Employee ElementType;
typedef struct{
    ElemnetType elements[STACK_SIZE];
    int _size;

    int _top;
} Stack;
void StackInit(Stack* stk);
ElementType StackTop(Stack* stk);
int Stackempty(Stack* stk);
void StackPush(Stack* stk,ElementType element);
void StackPop(Stack* stk,ElementType element);
#endif
