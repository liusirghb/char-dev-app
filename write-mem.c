#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd = 0;
	int src = 2013;
	
	/*���豸�ļ�*/
	fd = open("/dev/memdev0",O_RDWR);
	
	/*д������*/
	write(fd, &src, sizeof(int));
	
	/*�ر��豸*/
	close(fd);
	
	return 0;	

}
