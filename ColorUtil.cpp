#include <windows.h>
#include "ColorUtil.h"

void setColor(int color) { // function for seting a color to the text
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
