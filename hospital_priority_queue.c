#include <stdio.h>
#include <string.h>

#define MAX 20

char patient[MAX][30];
int priority[MAX];
int count = 0;

void addPatient()
{
    if (count == MAX)
    {
        printf("Queue is full!\n");
        return;
    }

    printf("Enter patient name: ");
    scanf("%s", patient[count]);

    printf("Enter priority (1-Emergency, 2-Urgent, 3-Routine): ");
    scanf("%d", &priority[count]);

    count++;

    printf("Patient added successfully.\n");
}

void treatNext()
{
    int i, pos;

    if (count == 0)
    {
        printf("No patients waiting.\n");
        return;
    }

    pos = 0;

    for (i = 1; i < count; i++)
    {
        if (priority[i] < priority[pos])
        {
            pos = i;
        }
    }

    printf("Treating Patient: %s (Priority %d)\n",
           patient[pos], priority[pos]);

    for (i = pos; i < count - 1; i++)
    {
        strcpy(patient[i], patient[i + 1]);
        priority[i] = priority[i + 1];
    }

    count--;
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- HOSPITAL PATIENT PRIORITY QUEUE ---\n");
        printf("1. Add Patient\n");
        printf("2. Treat Next\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                treatNext();
                break;

            case 3:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
