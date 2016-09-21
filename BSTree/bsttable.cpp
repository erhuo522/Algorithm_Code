/* Filename:  bsttable.cpp

   Programmer:  Br. David Carlson

   Date:  October 10, 1997

   Modified:  August 8, 1998.

   This file implements the functions of the BSTTableClass as set up in
   bsttable.h.
*/

#include "bsttable.h"


/* Given:  Nothing (other than the implicit BSTTableClass object).
   Task:   To check whether this object is empty.
   Return: true if it is empty, false otherwise.
*/
bool BSTTableClass::Empty(void) const
   {
   return BST.Empty();   // Note the use of 2 different Empty functions!
   }


/* Given:  Item   A data item to be inserted into the implicit table
                  object.
   Task:   To insert Item into this table.
   Return: Returns true in the function name to indicate success
           (could be expanded in the future if we wanted to ever
           indicate failure by returning false).  The implicit table
           object is modified.
*/
bool BSTTableClass::Insert(const ItemType & Item)
   {
   BST.Insert(Item);
   return true;   //  assume success!
   }


/* Given:  Searchkey   A KeyFieldType value to look up.
   Task:   To look for SearchKey in the table given as the implicit object.
   Return: Item        The structure found that contains Searchkey.
           In the function name, returns true if SearchKey was found,
           false otherwise.
*/
bool BSTTableClass::Retrieve(KeyFieldType SearchKey, ItemType & Item)
   {
   BSTNodePtr NodePtr;
   ItemType Target;

   Target.KeyField = SearchKey;
   NodePtr = BST.Find(Target);

   if (NodePtr == NULL)
      return false;
   else
      {
      NodePtr->GetInfo(Item);
      return true;
      }
   }


