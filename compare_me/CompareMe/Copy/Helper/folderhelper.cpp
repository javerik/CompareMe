#include "folderhelper.h"

FolderHelper::FolderHelper(QObject *parent) :
    QThread(parent)
{
}



//Creates all missing Folder (Just the Folder!)
void FolderHelper::run()
{
    //Get all MissingFolder


    //Send first Message


    emit Update(0,"Creating Folder",this->_result->GetAnalyse().MissingFolderNew.size());

    int counter = 0;
    foreach (QString folder, this->_result->GetAnalyse().MissingFolderNew) {
        //Increase the counter to tell the mainthread at which position we are
        counter++;
        //Create new Path

        QString tempCleaned = folder.replace(this->_result->GetAnalyse().OldBasePath,"");

        QString tempNewPath = this->_result->GetAnalyse().NewBasePath + folder;

        //Send Update
        emit Update(counter,"Executing:" + tempNewPath,-1);

        if (!QDir(tempNewPath).exists()) {
            if (QDir(tempNewPath).mkpath(tempNewPath)) {
                emit Update(counter,"Created Dir",-1);
            }else
            {
                emit Update(counter,"ERROR!",-1);
            }

        }

    }

    emit Finish();


}
