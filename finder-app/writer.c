#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <syslog.h>



int main(int argc, char *argv[])
{
int fd;

 openlog("COURSE 1 ASSIGNMENT 2", LOG_NDELAY, LOG_DAEMON);
 syslog(LOG_DEBUG, "Writing %s to file %s", argv[2], argv[1]);

 
 if(argc < 2){
	syslog(LOG_ERR, "Usage: writer.sh /tmp/aesd/assignment1/sample.txt ios \n");
        return -1;
    }
     
 if ((fd = open(argv[1], O_RDWR|O_CREAT, 0644)) == NULL)
	{
	     /* argv[0] program name.  */
	     /* argv[1] first argument */

	     syslog(LOG_ERR, "Cannot open input file %s\n",
		   argv[1]);
	     return(2);
	}

 write(fd,argv[2],sizeof(argv[2])+3);
 write(fd,"\n",1);

 close(fd);
	
               
  return EXIT_SUCCESS;
}

