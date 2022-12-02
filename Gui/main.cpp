#include "gui.hpp"

int main() {
    auto eGui = std::make_shared<Gui>();
    eGui->run();
    return 0;
}