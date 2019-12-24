#include <pthread.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "simplefs.h"

// global variables



/*
This function will be used tocreate a virtual disk
(i.e., asimple Linux file) of certain size. The name of the Linux file is vdiskname.
The parameter m is used to set the size. Size will be 2^m bytes.
If success, 0 will returned; if error, -1will be returned.
*/

int create_vdisk(char *vdiskname, int m){
  // implementation here
  return 0;
}

/*
This function will be used to initialize/create an sfs file system on the virtual
 disk (high-level formatting the disk). On disk file system structures (like superblock, FAT, etc.)
will be initialized as part of this call.If success, 0 will be returned.
If error, -1 will be returned.
*/

int sfs_format (char *vdiskname){
  // implementation
  return 0;
}


/*
This function will be used to mount the file system, i.e., to prepare the file system be used.
 This is a simple operation. Basically, it will open the regular Linux file
 (acting as the virtual disk) and obtain an integer file descriptor.  Other operations
2in the library will use this filedescriptor. This descriptor will be a global variable in the library.
If success, 0 will be returned; if error, -1 will be returned.
*/
int sfs_mount(char *vdiskname){
  // implementation
  return 0;
}


/*
This function will be used to unmount the file system:
flush the cached data to disk and close the virtual disk (Linux file) file descriptor.
It isa simple to implement function. If success, 0 will be returned, if error, -1 will be returned
*/
int sfs_umount(){
  // implementation
  return 0;
}


/*
With this, an applicaton will create a new file with name filename.
You library implementation of this function will use an entry in the root directory to store
information about the created file, like its name, size, first data blocknumber, etc.
If success, 0 will be returned. If error, -1 will be returned.
*/
int sfs_create(char *filename){
  // implementation
  return 0;
}


/*
With  this an application will open a file. The name of the file to open is filename.
 The mode paramater specifies if the file will be opened in read-only mode or in append-only mode.
 If 0, read-only; if1, append-only.
 We can eitherread the file or append to it.
 A file can not be opened for bothreading and appending at the same time.
 In your library you should have a open file table,and an entry in that table will be used for the opened file.
 The index of that entry can be returnedas the return value of this function.
 Hence the return value will be a non-negative integer acting as afile descriptor to
 be usedin subsequent file operations. If error, -1 will be returned.
*/
int sfs_open(char *filename, int mode){
  // implementation
  return 0;
}

/*
With this an application learns the size of a file whose descriptor is fd.
File must be opened first. Returns the number of data bytes in the file.
A file with no data in it (no content) has size 0. If error, returns -1.
*/
int sfs_getsize (int fd){
  // implementation
  return 0;
}

/*
With this an application will close a file whose descriptor is fd.
The related open file table entry should be marked as free.
*/
int sfs_close(int fd){
  // implementation
  return 0;
}

/*
With this, an application can read data from a file.
fd is thefile descriptor. buf is pointing to a memory area for which space is
allocated earlier with malloc (or it can be a static array). n is the amount of data to read.
Upon failure, -1 will be returned. Otherwise, number of bytes sucessfully read will be returned.
*/
int sfs_read(int fd, void *buf, int n){
  // implementation
  return 0;
}

/*
With this, an application can append new data to the file. The parameter fd is the file descriptor.
The parameter buf is pointing to (i.e., is the address of) a static array holding the
data or a dynamically allocted memory space holding the data. The parameter n is the size of the data
to write (append) into the file.
If error, -1 will be returned. Otherwise, the number of bytessuccessfully appended will be returned.
*/
int sfs_append(int fd, void *buf, int n){
  // implementation
  return 0;
}

/*
With this, an application can delete a file. The name of thefile to be deleted is filename.
If succesful, 0 will be returned. In case of an error, -1 will be returned.
*/
int sfs_delete(char *filename){
  // implementation
  return 0;
}

// functions
