#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
   pid_t fid = getppid(); 
    pid_t id = getpid();
    while(1)
    {
        printf("I am process! pid :%d\n",id);
        sleep(1);
        printf("I am process! pid :%d\n",id);
    }
    return 0;
}
