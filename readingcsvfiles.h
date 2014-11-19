#ifndef READINGCSVFILES_H
#define READINGCSVFILES_H
#include "mainwindow.h"

#include <QString>
#include <QFile>
#include <QStringList>
#include <QImage>
#include <QDebug>
#include <QTextStream>
#include <QStatusBar>
#include <QApplication>
#include <QMessageBox>
#include <QDateTime>

class ReadingCSVFiles
{
public:
    ReadingCSVFiles();
    bool Read(QString);
    bool Write();
    void Sort();
    QString SearchName(QString);
    QString SearchTime(QString);
    QString SearchLevel(QString);
    QString getUser(int) const;
    QString getUser1() const;
    QString getLevelofUser1() const;
    QString getTimeofUser1() const;
    int getTotal() const;
    void addLists(QString, QString, QString);

private:
    QStringList userList;
    QStringList lastLevelPlayedList;
    QStringList timeStampList;
    int total;
};

#endif // READINGCSVFILES_H
