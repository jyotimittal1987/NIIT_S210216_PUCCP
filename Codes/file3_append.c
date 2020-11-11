#include <stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("Batch_S210216.txt","a");
    fprintf(fp,"%s","file append"); /*append some text*/
    fclose(fp);
    return 0;
}

