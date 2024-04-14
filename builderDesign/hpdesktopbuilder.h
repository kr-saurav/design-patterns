#ifndef HPDESKTOPBUILDER_H
#define HPDESKTOPBUILDER_H

#include "desktopbuilder.h"

class HpDesktopBuilder: public DesktopBuilder{

    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();

};
#endif // HPDESKTOPBUILDER_H