/* Filename:  bstnode.h

   Programmer:  Br. David Carlson

   Date:  October 10, 1997

   Revised:  August 8, 1998 and June 27, 2000.

   This is the header file to accompany bstnode.cpp.  It provides the
   BSTNodeClass shown below as well as the BSTNodePtr type.
*/

#include "itemtype.h"


class BSTNodeClass
   {
   private:
      ItemType Info;
      BSTNodeClass * Left, * Right;
   public:
      BSTNodeClass(const ItemType & Item, BSTNodeClass * LeftPtr = NULL,
         BSTNodeClass * RightPtr = NULL):
         Info(Item), Left(LeftPtr), Right(RightPtr)
         {
         };
      void GetInfo(ItemType & TheInfo) const;
   friend class BSTClass;
   };

typedef BSTNodeClass * BSTNodePtr;


