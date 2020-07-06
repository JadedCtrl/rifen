#ifndef UTIL_H 
#define UTIL_H

#include <DateTime.h>
#include <Url.h>
#include "ProtocolListener.h"

BDateTime feedDateToBDate	( const char* );
BDateTime dateRfc3339ToBDate	( const char* );
BDateTime dateRfc822ToBDate	( const char* );
BDateTime stringDateToBDate	( const char*, const char* );

BString dateTo3339String	( BDateTime );


int32 webFetch	( BUrl,  BDataIO* );
int32 webFetch	( char*, BDataIO* );


#endif
