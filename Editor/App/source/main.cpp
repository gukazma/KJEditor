#include <iostream>
#include <Engine.h>
#include <Editor.h>

int main(int argc, char *argv[])
{
    Soarscape::PublicSingleton<Soarscape::Engine>::getInstance().startEngine(argc, argv);
    Soarscape::PublicSingleton<Soarscape::Editor>::getInstance().initialize(&Soarscape::PublicSingleton<Soarscape::Engine>::getInstance());
    bool rnt = Soarscape::PublicSingleton<Soarscape::Editor>::getInstance().run();
    Soarscape::PublicSingleton<Soarscape::Engine>::getInstance().shutdownEngine();
    return rnt;
}
//! [2]
