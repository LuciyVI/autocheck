    int len = 0;
void func_enter(int file_discriptor)
{
    char buff[32];
    buff[0]=0x0D;
    len = strlen(buff);
    write(file_discriptor,buff,len);
    sleep(2);
}
    void func_press_yes(int file_discriptor)
    {
        char buff[32] ="Y";
        len = strlen(buff);
        write(file_discriptor,buff,len);
        func_enter(file_discriptor);
        sleep(1);
        
    }
    void func_press_no(int file_discriptor)
    {
        char buff[32] ="N";
        len = strlen(buff);
        write(file_discriptor,buff,len);
        func_enter(file_discriptor);
        sleep(1);
    }
void func_del_on_BIOS(int file_discriptor)
   {
    char buff[32];
  
    char read_buff[256];
    read(file_discriptor,read_buff,128);
    sleep(4);
    buff[0]=0x7F;

    len = strlen(buff);
    write(file_discriptor,buff,len);
    sleep(5);
   }
    void func_arrow_right(int file_discriptor) // правая стрелка
    {
    char buff[32];

    buff[0]=0x1B;
    buff[1]=0x5B;
    buff[2]=0x43;
    
    
    len = strlen(buff);
    write(file_discriptor,buff,len);
    sleep(2);
    }
    void func_arrow_left(int file_discriptor) // левая стрелка
    {
        char buff[32];

        buff[0]=0x1B;
        buff[1]=0x5B;
        buff[2]=0x44;


    
    len = strlen(buff);
    write(file_discriptor,buff,len);
    sleep(2);
    }
    void func_arrow_down(int file_discriptor) //стрелка вниз
    {
    char buff[32];

    buff[0]=0x1B;
    buff[1]=0x5B;
    buff[2]=0x42;



    len = strlen(buff);
    write(file_discriptor,buff,len);
    sleep(2);
    }
    void func_arrow_up(int file_discriptor) //стрелка вверх
    {

    char buff[32];

    buff[0]=0x1B;
    buff[1]=0x5B;
    buff[2]=0x41;
    

    
    len = strlen(buff);
    write(file_discriptor,buff,len);
    sleep(2);
    }
void func_escape(int file_discriptor)
{
    sleep(5);
    char buff[32];
    buff[0]=0x1B;
    
    len = strlen(buff);
    write(file_discriptor,buff,len);
    sleep(2);
}
