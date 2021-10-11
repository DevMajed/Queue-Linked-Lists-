//
//  main.cpp

#include <iostream>
#include <stdio.h>
#include "Queue.h"
#include "QueueItem.h"
using std::cout;
using std::endl;


// main() has only the Queue objects to work with, not Queueitem
// note - you may need to change the definition of the main function to
// be consistent with what your C++ compiler expects.


int main() {

    // Create a Queue
    Queue myQueue;

    // should do nothing here because Queue is empty
    myQueue.removeItem();

    // adding four elements
    myQueue.addItem("red");
    myQueue.addItem("green");
    myQueue.addItem("blue");
    myQueue.addItem("orange \n");

    // Print out the list, both the number and data (contents of queue)
    cout << "\n         Printing the (first) four items\n " << endl;
    myQueue.print();

    // Remove the head 2 elements ( 1: Red and 2: Green )
    myQueue.removeItem();
    myQueue.removeItem();
    cout << "\n         The head elements: 1: Red and 2: Green  Got Removed from  List \n" << endl;


    // adding four new elements
    myQueue.addItem("The fifth Item");
    myQueue.addItem("The Sixth Item");
    myQueue.addItem("the Seventh Item");
    myQueue.addItem("The Eight item \n");

    // Print out the list, both the number and data (contents of queue)
    cout << "\n         Print the old elemetnts 3 and 4, and adding four new elements 5,6,7,8 \n " << endl;
    myQueue.print();


    cout << "\n         The Head Four Items Got Deleted, Left over are 7 and 8 \n" << endl;

    // Remove 4 elements.
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();

    // Print out the list, both the number and data (contents of queue)
    cout << "\n         Print the left items, 7 and 8 \n" << endl;
    myQueue.print();


    cout << "\n         The Whole queue Got Erased \n" << endl;
    // Erase the queue.
    myQueue.erase();


    cout << "\n         New 3 items got added \n" << endl;
    // adding 3 elements
    myQueue.addItem("Majed");
    myQueue.addItem("Meshal");
    myQueue.addItem("Alharbi");

    // Print out the list, both the number and data (contents of queue)
    cout << "          Printing The new 3 itmes \n" << endl;

    myQueue.print();

    // Erase the queue.
    myQueue.erase();

    // Print out the list, both the number and data (contents of queue)
    cout << "\n         The queue is erased, and it is being printed right now, shold print nothig.\n" << endl;
    myQueue.print();

    return 0;
}
