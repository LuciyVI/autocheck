#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <func_keys.h>

/* Сценарий прошивки ПАК */

int main()
{

    struct termios tty;
    int fd = open("/dev/ttyUSB0",O_RDWR);
    
     
     



      if(tcgetattr(fd, &tty) != 0) 
        {
             printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
        }

    cfsetispeed(&tty, B38400);
    cfsetospeed(&tty, B38400);

      if (tcsetattr(fd,TCSANOW,&tty) != 0)
      {
        printf("Error %i from tcSetattr: %s\n", errno, strerror(errno));

      }

    cfgetispeed(&tty);
    
    
  
  
    // int result = read(file_discriptor,buff,len)
    
    func_del_on_BIOS(fd);
    func_arrow_left(fd);
    func_arrow_left(fd);
    func_arrow_up(fd);
    func_enter(fd);    
    func_enter(fd);
    func_arrow_down(fd);
    func_arrow_down(fd);
    func_enter(fd);
    sleep(2);
    func_escape(fd);
    func_arrow_right(fd);
    func_arrow_down(fd);
    func_arrow_down(fd);
    func_enter(fd);
    sleep(3);
    func_enter(fd);
    sleep(90);
    func_press_yes(fd);
    sleep(10);
    func_press_yes(fd);
    sleep(10);
    func_press_yes(fd);
    sleep(25);
    func_enter(fd);



}
 

