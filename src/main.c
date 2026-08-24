#include <i86.h>
#include <dos.h>

void Set_Graphics_Mode(int);

void Set_Graphics_Mode(int mode)
{
    union REGS inregs, outregs;

    inregs.h.ah = 0;
    inregs.h.al = (unsigned char)mode;

    _int86(0x10, &inregs, &outregs);
}

void main()
{
    Set_Graphics_Mode(0x13);
    sleep(10);
}
