/* Filename:  bsttable.h

   Programmer:  Br. David Carlson

   Date:  October 10, 1997

   Modified:  August 8, 1998

   This is the header file to accompany bsttable.cpp.  It sets up
   BSTTableClass as shown below.
*/

#include "table.h"
#include "bstree.h"


class BSTTableClass: public RamTableBaseClass
   {
   public:
      bool Insert(const ItemType & Item);
      bool Retrieve(KeyFieldType SearchKey, ItemType & Item);
      bool Empty(void) const;
   private:
      BSTClass BST;   // an embedded object
   };


