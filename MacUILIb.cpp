#include "MacUILib.h"

print_ptr MacUILib_printf;

#ifdef WINDOWS

#include <conio.h>
#include <windows.h>

void MacUILib_init(void)
{
  MacUILib_printf = &printf;
}

void MacUILib_init_sync(void)
{
  // Nothing different.  Win allows scanf() to be used with conio.h anyways.
  MacUILib_printf = &printf;
}

void MacUILib_Delay(int usec)
{
  Sleep(usec / 1000);
}

int MacUILib_hasChar(void)
{
  return _kbhit();
}

char MacUILib_getChar(void)
{
  return _getch();
}

void MacUILib_clearScreen(void)
{
  system("cls");
}

void MacUILib_uninit(void)
{
  // No implementation required
  // system("cls");
  MacUILib_printf("\nPress ENTER to Shut Down\n");
  getchar();
}

#endif
