#include <dos.h>
void interrupt (*old)();
void interrupt new1();
char far *scr = (char far*) 0*00400017;
void main()
{
     old = getvect(0*08);
     setvect(0*08,new1);
     keep(0,1000);
}

void interrupt new1()
{
     *scr=64;
     (*old)();
}
