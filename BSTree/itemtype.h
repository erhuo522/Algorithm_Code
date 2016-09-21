/* Filename:  ItemType.h

   Programmer:  Br. David Carlson

   Date:  October 10, 1997

   Modified:  August 8, 1998 and June 27, 2000

   This header file sets up the data type ItemType.  It also provides
   prototypes for overloaded ==, <, and > operators for items of type
   ItemType.
*/

#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
using namespace std;


typedef long KeyFieldType;

typedef float DataFieldType;

typedef struct ItemType
  {
   KeyFieldType KeyField;
   DataFieldType DataField;
 
    ItemType()
	   :KeyField(0),DataField(0.0f)
   {

   }

   ItemType(KeyFieldType key,  DataFieldType val)
	   :KeyField(key),DataField(val)
   {

   }

  } ItemType;


bool operator== (const ItemType & First, const ItemType & Second);

bool operator> (const ItemType & First, const ItemType & Second);

bool operator< (const ItemType & First, const ItemType & Second);

#endif


