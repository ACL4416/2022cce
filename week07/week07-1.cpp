#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt", "w");
    fprintf(fout, "Holle World\n");

    printf("檔案就會出現了哦,請檢察檔案總管\n");
}
