#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QString>
#include <vector>

class FileHandler
{
public:
    std::vector<int> readArrayFromFile(const QString &fileName);
    void saveArrayToFile(const QString &fileName, const std::vector<int> &array);
};

#endif
