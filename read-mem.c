#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd = 0;
	int dst = 0;
	
	/*���豸�ļ�*/
	fd = open("/dev/memdev0",O_RDWR);
	
	/*д������*/
	read(fd, &dst, sizeof(int));
	
	printf("dst is %d\n",dst);
	
	/*�ر��豸*/
	close(fd);
	
	return 0;	

}
