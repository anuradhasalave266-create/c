//write data to a file
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "w");

    fprintf(fp, "Name: Anuradha\n");
    fprintf(fp, "Roll No: 101\n");
    fprintf(fp, "Marks: 90");

    fclose(fp);

    printf("Data written successfully.");
    return 0;
}


//Read data from a file
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("student.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}



//copy one file to another
#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("student.txt", "r");
    fp2 = fopen("copy.txt", "w");

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.");

    return 0;
}



//count characters in a file
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("student.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        count++;
    }

    fclose(fp);

    printf("Total characters = %d", count);

    return 0;
}