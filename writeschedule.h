#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "day.h"
#include <QVector>



class writeSchedule
{
public:
    writeSchedule();
    void writeFile(const QVector<day>&);
};

#endif // SCHEDULE_H
