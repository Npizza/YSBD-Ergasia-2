#ifndef HELP_H_
#define HELP_H_
#include "bf.h"
#define MAXOPENFILES 20
#define MAXSCANS 20


struct File {
    char *filename;
    char attrType1;
    int attrLength1;
    char attrType2;
    int attrLength2;
};

struct Scan{
  int fileDesc;
  int blocknum;
  int recordnum;
};

struct File  Openfiles[MAXOPENFILES]; //pointer to a file struct
int openfilecounter=0; //counts the corrent open files


struct Scan Openscan[MAXSCANS];
int openscancounter=0;

#endif /* HELP_H_ */
