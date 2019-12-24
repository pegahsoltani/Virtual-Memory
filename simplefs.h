#ifndef SIMPLEFS_H
#define SIMPLEFS_H
// function headers go here
int create_vdisk(char*, int);
int sfs_format (char*);
int sfs_mount(char*);
int sfs_umount(void);
int sfs_create(char*);
int sfs_open(char*, int);
int sfs_getsize (int);
int sfs_close(int);
int sfs_read(int, void*, int);
int sfs_append(int, void*, int);
int sfs_delete(char*);
#endif
