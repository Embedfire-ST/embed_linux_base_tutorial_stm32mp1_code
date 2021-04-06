#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <errno.h>

#include <linux/input.h>
#include <linux/input-event-codes.h>

const char * path = "/dev/input/event0";

int main(char argc,char *argv[])
{
   int ret;

   int fd;
   struct input_event event;

   fd = open(path,O_RDONLY);
   if(fd < 0)
   {
      perror(path);
      exit(-1);
   }

   while(1)
   {
      ret = read(fd,&event,sizeof(struct input_event));
      if(ret == sizeof(struct input_event))
      {
            //EV_SYN是事件分隔标志，不打印
            if(event.type != EV_SYN)
            {
               printf("Event: time %ld.%ld,",event.time.tv_sec,event.time.tv_usec);
               printf("type:%d,code:%d,value:%d\n", event.type,event.code,event.value);
            }
      }
   }

   close(fd);

   return 0;
}