//
//  Queue.cpp
//
//  Copyright © 2020 Majed. All rights reserved.

#include <iostream>
#include <stdio.h>
#include "Queue.h"
#include "QueueItem.h"
using std::cout;
using std::endl;




//  Start  of Add Item, adding an item to the tail of the queue
void Queue::addItem(const char* pData)

{
    // dynamically create and init a new QueueItem object
    QueueItem* pItem = new QueueItem(pData, ++_itemCounter); // alocating new memory for pItem

    if (nullptr == _pHead)  // check for empty queue
        _pHead = _pTail = pItem; // first element

    else
    {
        // Derefreancing _pTail pointer to use setNext to give new pointer, making pItem be the tail
        (*_pTail).setNext(pItem);
        _pTail = pItem; // putting the new item in tail and got new pointter to new item
    }

}
//  End of Add Item










// Start of RemoveItem,removing from the queue at the other end (the head)
void Queue::removeItem()

{


    if (_pTail == nullptr) // nothing to remove
    {
        //  "If called on an empty Queue, it does nothing"
    }

    else if (_pTail > nullptr)
    {

        QueueItem* pItem = (*_pHead).getNext();
        delete _pHead;
        _pHead = pItem;

      

    }

    else
    {

        // removes the head QueueItem from the queue and  release the memory
        delete _pHead;
        // updates _pHead to point at the following item by Derefreancing _pHead to use getNext
        QueueItem* pItem = (*_pHead).getNext(); // new memory place for pItem
        _pHead = pItem;
    }
}
// Ennd of RemoveItem







// Start of Erase,  removes all the items in the queue and should release the memory
void Queue::erase()

{
    while (_pHead != nullptr)
    {
        QueueItem* pItem = (*_pHead).getNext();
        delete _pHead;
        _pHead = pItem;
    }
}
// End of erase



// " Printing all items the queue (from head to tail)"
void Queue::print()

{
    // setting the item to the first one in line, to the_pHead memory location
    QueueItem* pItem = _pHead;

    // checking if we have something in that item
    while (pItem != nullptr)
    {
        // gittint the ID
        cout << (*pItem).getId() << endl;
        // gitting the contant
        cout << (*pItem).getData() << endl;
        // move to next to print it
        pItem = (*pItem).getNext();
    }
}
// end of Print




