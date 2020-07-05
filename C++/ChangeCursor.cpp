#include <iostream>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

// g++ ChangeCursor.cpp -L/usr/include/X11/Xlib.h -L/usr/include/X11/Xutil.h -o ChangeCursor  -lX11 && ./ChangeCursor

void mouseMove(int x, int y)
{
    Display *displayMain = XOpenDisplay(NULL);

    if(displayMain == NULL)
    {
        fprintf(stderr, "Errore nell'apertura del Display !!!\n");
        exit(EXIT_FAILURE);
    }

    XWarpPointer(displayMain, None, None, 0, 0, 0, 0, x, y);

    XCloseDisplay(displayMain);
}

int main()
{   
    mouseMove(200, 300);

    return 0;
}