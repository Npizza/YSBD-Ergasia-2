#ifndef HELP_H_
#define HELP_H_

#include "bf.h"

#define MAXOPENFILES 20
#define MAXSCANS 20


struct File {
    char *filename;
    char attrType1;   //the number of our key
    int attrLength1;
    char attrType2;   //the element of the block that we want
    int attrLength2;
};

struct Scan{
  int fileDesc;
  int blocknum;
  int recordnum;
};

#endif /* HELP_H_ */
