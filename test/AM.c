#include "AM.h"
#include "help.h"
int AM_errno = AME_OK;

void AM_Init() {
	int fd; //create a file decreptor
	BF_Block *block;	//create a pointer to a block
	BF_Block_Init(&block);	//do initialize the correct size of block
	BF_Init(LRU);	//initialize the bf layer

	//we will need one array to store the data of open files
	//int the array we will store a struct that stores the types and the length
	//of the blocks
	extern struct File  Openfiles[MAXOPENFILES]; //pointer to a file struct
	extern int openfilecounter; //counts the corrent open files
	//we will need a second global array to store the details of the file scan
	//we will store the file descriptor and the result of the Scan
	extern struct Scan Openscan[MAXSCANS];
	extern int openscancounter;

	//maybe we need a list to keep tracking the record
	// the komboi of the list store a value to the next boclk (blocknumber)

	return;
}


int AM_CreateIndex(char *fileName,
	               char attrType1,
	               int attrLength1,
	               char attrType2,
	               int attrLength2) {
	BF_CreateFile(fileName); //create the file
	struct File file;//set the openfile array
	//store the data t the struct
	openfilecounter=0;//store the number of the open files


  return AME_OK;
}


int AM_DestroyIndex(char *fileName) {


	BF_CloseFile(fileName); //close the fileName
	//delete the struct file
	//fix the Openfiles array maybe this array should be a list
  return AME_OK;
}


int AM_OpenIndex (char *fileName) {
  return AME_OK;
}


int AM_CloseIndex (int fileDesc) {
  return AME_OK;
}


int AM_InsertEntry(int fileDesc, void *value1, void *value2) {
  return AME_OK;
}


int AM_OpenIndexScan(int fileDesc, int op, void *value) {
  return AME_OK;
}


void *AM_FindNextEntry(int scanDesc) {

}


int AM_CloseIndexScan(int scanDesc) {
  return AME_OK;
}


void AM_PrintError(char *errString) {

}

void AM_Close() {

}
