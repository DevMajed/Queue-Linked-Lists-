//  QueueItem.cpp
// Queueitem class that represent eaach element in the Queueltem

#include <iostream>
using std::cout;
using std::endl;
#include "QueueItem.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using std::strncpy;
using std::strlen;
// character string as the data value
// a unique (among all QueueItems in a Queue) integer item identifier
// and a pointer to the next QueueItem in the list


// ( Constructor in the header for a cleaner Code )

// setting data member of the class, put the next value in parameter so we set next item in queue
void QueueItem::setNext(QueueItem* pItem) // pointing to the item
{
    _pNext = pItem;
}
// End of set Next


//  getting data member of the class, Nothing much to do here, return next item in queue
QueueItem* QueueItem::getNext() const
{
    return _pNext;
}
// End of set Get next


//  getting the ID of the data member of the class, returning the unique id for item in queue
int QueueItem::getId() const
{
    return _itemId;
}
// End of getting ID.


// Getting Data
const char* QueueItem::getData() const

{
    return _data;
}

// End of getting Data.
