#include "controlpanel.h"

ControlPanel::ControlPanel(QObject *parent)
    : QObject(parent)
    , _substation{ new Substation("ПС 110/35",115,35,10)}
{
    readDbFiles();
}

void ControlPanel::readDbFiles()
{

}
