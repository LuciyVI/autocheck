#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


// int buffer_data(char *buff_data ,int mem_aloc)
// {
//     char *buff=malloc(mem_aloc);
//     *buff=buff_data;
//     return *buff;
//     //
//     //
//     //

// }

int run_as(char *data,char * const argv)
{  
    printf("This is data =%d",*data);
    //execve(data,argv, NULL);   
}
int read_xml(char path_to_config, char len_buff)
{
    char inernal_buff[256];
    FILE * os;
    
}
int main()
{  
char *test[2];
test[0]="/bin/bash";
test[1]=NULL;
// char *ptr_test=&test;
run_as(*test,test[1]);
}


