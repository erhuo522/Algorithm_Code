/* Filename:  bstree.h

   Programmer:  Br. David Carlson

   Date:  October 10, 1997

   Modified:  August 8, 1998.

   This is the header file to accompany bstree.cpp.  It provides the
   BSTClass as shown below.
*/

#include "bstnode.h"


class BSTClass
   {
   private:
      BSTNodePtr GetNode(const ItemType & Item,
         BSTNodePtr LeftPtr = NULL, BSTNodePtr RightPtr = NULL);
      void FreeNode(BSTNodePtr NodePtr);
      void ClearTree(void);
      void ClearSubtree(BSTNodePtr Current);
      BSTNodePtr SubtreeFind(BSTNodePtr Current,
         const ItemType & Item) const;
      // The following are sometimes made protected instead of private:
      BSTNodePtr Root;
      int Count;
   public:
      //  constructor:
      BSTClass(void);
      //  destructor:
      ~BSTClass(void);
      int NumItems(void) const;
      bool Empty(void) const;
      void Insert(const ItemType & Item);
      //  Some sort of Remove method could also be added, but
      //  it would require effort to remake the binary search tree
      //  after the deletion of a node.
      BSTNodePtr Find(const ItemType & Item) const;
   };


