/***************************************************************************
 *   Copyright (C) 2004-2017 by Michael Griffin                            *
 *   mrmisticismo@hotmail.com                                              *
 *                                                                         *
 *   Purpose:                                                              *
 *                                                                         *
 *                                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

# ifndef DTFUNC_H
# define DTFUNC_H

# include "stamp.h"
# include <ctime>
# include <string>


// Dos Time for Backwards MSGAPI Compability
time_t  StampToDosTime(struct _stamp *st);
struct  _stamp *DosTimeToStamp(time_t tt);

// Standard current time / date conversions.
std::string getLastCallDays(std::time_t lastcall);
std::string getAge(std::time_t sec);
int   VerifyBday(char *date);
std::string Sec2DateTM(std::time_t time, int format);
std::string Sec2Date(std::time_t sec);
time_t Date2Sec(char *date);
time_t GetCurrentDTSec();
time_t GetTimeSec();

# endif
