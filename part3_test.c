#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main(){

printf("pid_t: %zu\n",sizeof(pid_t));
printf("uid_t:%zu\n",sizeof(uid_t));
printf("int:%zu\n",sizeof(int));
printf("unsigned int:%zu\n",sizeof(unsigned int));
printf("unsigned long int:%zu\n",sizeof(long unsigned int));



return 0;
}
