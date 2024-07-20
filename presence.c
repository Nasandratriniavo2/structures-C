#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "presence.h"

void openFile(FILE* file)
{
    data students[75];
    file=fopen("l1.csv","r+");
   
    if(file==NULL)
    {
        printf("Error->Open the file\n");
        exit(1);
    }
    
    //getData(file, students);
} 

void getData(FILE* file, data students[])
{
    int number,i=0,name,surname,c;
    char num[4]; 
    char** splitted;
    char line[100];

    while(!feof(file))
    {
        while(!feof(file))
        {
            fgets(line,100,file);
            
            if(occurence(line,':') == 3)
            {
                splitted = split(line);
                students[i].number = atoi(splitted[0]);
                students[i].name = splitted[1];
                students[i].surname = splitted[2];            
                i++;
            }
        }
    } 

    for(int i=0; i<75; i++)
        printf("%d %s %s\n", students[i].number,students[i].name,students[i].surname);
}   

char** split(char* str)
{
    char** splitted;
    int i,j=0,k=0,size;
    size=occurence(str,':');
    splitted = (char**) malloc((size+1)*sizeof(char*));

    for(int i=0; i<size+1; i++)
        splitted[i] = (char*) malloc(100*sizeof(char));
    
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] != ':')
           splitted[j][k++] = str[i];

        else
        {
            j++;
            k=0;
        } 
    }      

    return splitted;    
}

int occurence(char str[], char ch){
    int c=0;

    for(int i=0; i<strlen(str); i++){
        if(str[i] == ch)
            c++;
    }
    return c;
}


