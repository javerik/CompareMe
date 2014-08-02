#include "updatemessage.h"

UpdateMessage::UpdateMessage(int currentPos, QString message, int maximum)
{

    this->CurrentPos = currentPos;
    this->Maximum = maximum;
    this->MSG = message;

}
