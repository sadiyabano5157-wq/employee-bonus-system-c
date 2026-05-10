#include<stdio.h>

int main()
{
    float salary, bonus, final_salary;

    int experience;

    printf("Enter experience:\n");
    scanf("%d",&experience);

    printf("Enter salary:\n");
    scanf("%f",&salary);

    if(experience>=10)
    {
        bonus = salary * 20 / 100;
    }
    else if(experience>=5)
    {
        bonus = salary * 10 / 100;
    }
    else
    {
        bonus = 0;
    }

    final_salary = salary + bonus;

    printf("Salary = %.2f\n",salary);

    printf("Employee Bonus = %.2f\n",bonus);

    printf("Final Salary = %.2f\n",final_salary);

    return 0;
}
