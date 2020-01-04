#include <stdio.h>

int x,y;

void do_heading(char *filename);

int line, page;

int main (int argv, char *argc[]){

    char buffer[256];
    FILE *fp;

    if (argv < 2)
    {
        fprintf(stderr, "\n Proper Usage is: ");
        fprintf(stderr, "\n\n PRINT_IT filename.ext\n");
        return 1;
    }

    if ((fp = fopen( argc[1], "r")) == NULL)
    {
        fprintf(stderr, "Error opening file, %s!",argc[1]);
        return 1;
    }

    page = 0;
    line = 1;
    do_heading(argc[1]);

    while (fgets (buffer, 256, fp ) != NULL)
    {
        if (line % 55 == 0)
            do_heading(argc[1]);
        
        fprintf(stderr, "%4d:\t%s", line++, buffer);
    }

    fprintf(stderr , "\f");
    fclose(fp);

    return 0;
}

void do_heading(char *filename){
    page++;
    if (page > 1)
        fprintf(stderr, "\f");
    
    fprintf(stderr, "Page: %d, %s\n\n", page, filename );
    
}