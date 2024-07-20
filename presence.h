#ifndef __PRESENCE_H__
#define __PRESENCE_H__

    typedef struct data
    {
        char* name;
        char* surname;
        int number;
    }data;

    enum computer
    {
        YES,
        NO,
        OWN_COMPUTER
    };

    void openFile(FILE* file);
    void getData(FILE* file,data students[]);
    void lireFichier(FILE* file);
    char** split(char* string);
    int occurence(char str[], char ch);
#endif