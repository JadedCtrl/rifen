/*
 * Copyright 2020, Jaidyn Levesque <jadedctrl@teknik.io>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#ifndef UTIL_H 
#define UTIL_H

#include <DateTime.h>

#include "ProtocolListener.h"

class BUrl;


BDateTime feedDateToBDate(const char*);
BDateTime dateRfc3339ToBDate(const char*);
BDateTime dateRfc822ToBDate(const char*);
BDateTime stringDateToBDate(const char*, const char*);

BString dateTo3339String(BDateTime);

bool withinDateRange(BDateTime, BDateTime, BDateTime);

bool isRemotePath(BString);

BString urlToFilename(BUrl url);

int32 fetch(BUrl url, BDataIO* reply, BString* hash, int timeout);

void userFileError(status_t status, const char* path);


#endif // UTIL_H

