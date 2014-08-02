#ifndef UPDATEMESSAGE_H
#define UPDATEMESSAGE_H

#include <QString>
class UpdateMessage
{
public:
    UpdateMessage(int currentPos,QString message="",int maximum=-1);

    int Maximum;

    int CurrentPos;

    QString MSG;



};

#endif // UPDATEMESSAGE_H
