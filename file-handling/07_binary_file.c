#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    FILE *file;
    struct Student student = {101, 92.5f};
    struct Student result;

    file = fopen("student.dat", "wb");

    if (file == NULL)
    {
        printf("Unable to create file.\n");
        return 1;
    }

    fwrite(&student, sizeof(student), 1, file);

    fclose(file);

    file = fopen("student.dat", "rb");

    fread(&result, sizeof(result), 1, file);

    fclose(file);

    printf("Roll: %d\n", result.roll);
    printf("Marks: %.2f\n", result.marks);

    return 0;
}
