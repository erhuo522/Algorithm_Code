/* Filename:  table.h

   Programmer:  Br. David Carlson

   Date:  October 7, 1997

   Modified:  August 8, 1998.

   This is the header file to provide the abstract base class called
   RamTableBaseClass.
*/

#include "itemtype.h"


class RamTableBaseClass
   {
   public:
      virtual bool Insert(const ItemType & Item) = 0;
      virtual bool Retrieve(KeyFieldType SearchKey, ItemType & Item) = 0;
      virtual bool Empty(void) const = 0;
   };

// The = 0; means there is no code; these are "pure virtual" functions.


