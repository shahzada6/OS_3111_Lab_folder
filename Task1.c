#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd;
	char buffer[80];
	static char message[] = "Name: Shahzada Fathurrehman\nReg.No: BSCS-20F0002\nSemester:Fall 22";
	fd = open("myfile.txt",O_RDWR);
	if (fd != -1)
	{
		printf("myfile opened for read/write access \n");
		write(fd, message, sizeof(message));
		lseek(fd, 5, 0);
		/* go back to the beginning of the file */
		read(fd, buffer, sizeof(message));
		printf(" %s was written to myfile \n", buffer);
		close (fd);
	}
	else
	{
		printf(" Error in openng myfile \n");
	}
}
