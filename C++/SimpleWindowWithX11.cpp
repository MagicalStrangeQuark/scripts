#include <X11/Xlib.h>
#include <iostream>

const std::string MESSAGE_CLOSING_WINDOW = "Closing window...";

int main(int argc, char *argv[])
{
    Display *d;
    int s;
    Window w;
    XEvent ev;
    int should_quit = 0;

    d = XOpenDisplay(NULL);
    s = XDefaultScreen(d);
    w = XCreateSimpleWindow(d, XRootWindow(d, s), 0, 0, /** Width = */ 500, /** Height = */ 700, 0, XBlackPixel(d, s), XWhitePixel(d, s));

    XSelectInput(d, w, ButtonPressMask);
    XMapWindow(d, w);

    while (!should_quit)
    {
        XNextEvent(d, &ev);

        switch (ev.type)
        {
        case ButtonPress:
            should_quit = 1;
            std::cout << MESSAGE_CLOSING_WINDOW << std::endl;
            break;
        default:
            break;
        }
    }

    return 0;
}