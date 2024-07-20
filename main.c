#include <stdio.h>
#include <stdlib.h>
#include "presence.h"

int main()
{
    FILE* files=NULL;
    data students[75];

    //openFile(files);
    files=fopen("l1.csv","r+");
    getData(files, students);
    fclose(files);
    return(0);
}