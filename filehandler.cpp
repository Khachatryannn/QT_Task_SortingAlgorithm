#include "filehandler.h"
#include <QFile>
#include <QTextStream>

std::vector<int> FileHandler::readArrayFromFile(const QString &fileName)
{
    std::vector<int> array;
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            array.push_back(line.toInt());
        }
        file.close();
    }
    return array;
}

void FileHandler::saveArrayToFile(const QString &fileName, const std::vector<int> &array)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const int &num : array) {
            out << QString::number(num) << '\n';
        }
        file.close();
    }
}


