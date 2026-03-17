#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char dept[50];
    float salary;
    char position[50];
    char doj[20];
};

struct Employee emp[100];
int count = 0;

void createRecord()
{
    printf("\nEnter Employee ID: ");
    scanf("%d",&emp[count].id);

    printf("Enter Name: ");
    scanf("%s",emp[count].name);

    printf("Enter Department: ");
    scanf("%s",emp[count].dept);

    printf("Enter Salary: ");
    scanf("%f",&emp[count].salary);

    printf("Enter Position: ");
    scanf("%s",emp[count].position);

    printf("Enter Date of Joining: ");
    scanf("%s",emp[count].doj);

    count++;
    printf("Record Added Successfully\n");
}

void displayRecords()
{
    int i;

    if(count==0)
    {
        printf("No records available\n");
        return;
    }

    for(i=0;i<count;i++)
    {
        printf("\nEmployee ID: %d",emp[i].id);
        printf("\nName: %s",emp[i].name);
        printf("\nDepartment: %s",emp[i].dept);
        printf("\nSalary: %.2f",emp[i].salary);
        printf("\nPosition: %s",emp[i].position);
        printf("\nDate of Joining: %s\n",emp[i].doj);
    }
}

void modifyRecord()
{
    int id,i;

    printf("Enter Employee ID to Modify: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            printf("Enter New Name: ");
            scanf("%s",emp[i].name);

            printf("Enter New Department: ");
            scanf("%s",emp[i].dept);

            printf("Enter New Salary: ");
            scanf("%f",&emp[i].salary);

            printf("Enter New Position: ");
            scanf("%s",emp[i].position);

            printf("Enter New Date of Joining: ");
            scanf("%s",emp[i].doj);

            printf("Record Updated Successfully\n");
            return;
        }
    }

    printf("Employee not found\n");
}

void deleteRecord()
{
    int id,i,j;

    printf("Enter Employee ID to Delete: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(emp[i].id==id)
        {
            for(j=i;j<count-1;j++)
            {
                emp[j]=emp[j+1];
            }

            count--;
            printf("Record Deleted Successfully\n");
            return;
        }
    }

    printf("Employee not found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n------Employee Database Menu------\n");
        printf("1. Create Record\n");
        printf("2. Display Records\n");
        printf("3. Modify Record\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: createRecord(); break;
            case 2: displayRecords(); break;
            case 3: modifyRecord(); break;
            case 4: deleteRecord(); break;
            case 5: printf("Exit\n"); break;
            default: printf("Invalid choice\n");
        }

    }while(choice!=5);

    return 0;
}
