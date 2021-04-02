import engine_sysbridge;
import engine_basic;

#include <iostream>

using namespace sysbridge;
using vk = sysbridge::keyboard::KeyList;

int main()
{
    try
    {
        engine::args::setFPS(114);
    }
    catch (std::exception& e)
    {
        std::cerr << "[exception] " <<  e.what() << std::endl;
        return -1;
    }


    while (true)
    {
        std::cout << (keyboard::checkKeyDown(static_cast<int>(vk::F1)) ? "true\n" : "false\n");
    }

    return 0;
}