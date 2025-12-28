#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("harry.txt", "w");
    int num = 9216;

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}

// Difference between "write" and "append" mode in File I/O:
//
// 1. "w" → Write mode (overwrites existing data in the file)
// 2. "a" → Append mode (adds new data at the end of the file)
// 3. "w" deletes old content before writing new data
// 4. "a" keeps old content and adds new data without deleting
// 5. Use "w" when creating a new file or replacing data
// 6. Use "a" when you want to add more data later