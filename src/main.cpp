#include <QApplication>
#include <portaudio.h>
#include <sndfile.hh>
#include "Window.h"

int main(int num_args, char** args)
{
    QApplication app(num_args, args);

    Window* w = new Window();
    w->show();

    const int ret = app.exec();

    delete w;

    return ret;
}
