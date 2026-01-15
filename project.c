#include <stdio.h>

struct Employee {
    int emp_id;
    char name[30];
    float basic_salary;
    float hra;
    float da;
    float pf;
    float gross_salary;
    float net_salary;
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic_salary);

    // Salary calculations
    e.hra = 0.20 * e.basic_salary;   // 20% HRA
    e.da  = 0.10 * e.basic_salary;   // 10% DA
    e.pf  = 0.08 * e.basic_salary;   // 8% PF

    e.gross_salary = e.basic_salary + e.hra + e.da;
    e.net_salary = e.gross_salary - e.pf;

    // Output employee details
    printf("\n--- Employee Payroll Details ---\n");
    printf("Employee ID   : %d\n", e.emp_id);
    printf("Employee Name : %s\n", e.name);
    printf("Basic Salary  : %.2f\n", e.basic_salary);
    printf("HRA           : %.2f\n", e.hra);
    printf("DA            : %.2f\n", e.da);
    printf("PF            : %.2f\n", e.pf);
    printf("Gross Salary  : %.2f\n", e.gross_salary);
    printf("Net Salary    : %.2f\n", e.net_salary);

    return 0;
}
