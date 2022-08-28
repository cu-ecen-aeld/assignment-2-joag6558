#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
int fd;
  
	if ((fd = open(argv[1], "r")) == NULL)
	{
	     /* First string (%s) is program name (argv[0]).  */
	     /* Second string (%s) is name of file that could */
	     /* not be opened (argv[1]). */



	     (void)fprintf(stderr, "%s: Cannot open input file %s\n",
		   argv[0], argv[1]);
	     return(2);
	}
	else
	{
	     printf("%s: Cannot open input file %s\n",
		   argv[0], argv[1]);
	}
	
               
  return EXIT_SUCCESS;
}

