/* Filename:  bsttest.cpp

   Programmer:  Br. David Carlson

   Date:  October 10, 1997

   Last Modified:  December 4, 2001

   This program inserts some hard-coded data (floats) into a binary
   search tree.  It then tests the NumItems, Empty, and Find functions
   by calling them and reporting the results on the screen.

   Tested with:
      Microsoft Visual C++ 6.0
      Microsoft Visual C++ .NET
      g++ under Linux
*/

#include "bstree.h"


int main(void)
   {
   BSTClass BST;
   BSTNodePtr Result;

   cout << "Number of items in BST is " << BST.NumItems() << endl;

   if (BST.Empty())
      cout << "BST is empty (correct)" << endl;
   else
      cout << "BST is not empty (incorrect)" << endl;

   cout << "Inserting data" << endl;
   BST.Insert(ItemType(450, 4.5f));
   BST.Insert(ItemType(-333, -3.33f));
   BST.Insert(ItemType(1260, 12.6f));
   BST.Insert(ItemType(4433, 44.33f));
   BST.Insert(ItemType(1256, 12.56f));

   cout << "Number of items in BST is " << BST.NumItems() << endl;

   if (BST.Empty())
      cout << "BST is empty (incorrect)" << endl;
   else
      cout << "BST is not empty (correct)" << endl;

   ItemType item;

   item.KeyField = 1260;
   Result = BST.Find(item);
   if (Result == NULL)
      cout << "The 1260 could not be found in BST (incorrect)." << endl;
   else
      cout << "The 1260 was found in BST (correct)." << endl;

   item.KeyField = 660;
   Result = BST.Find(item);
   if (Result == NULL)
      cout << "The 660 could not be found in BST (correct)." << endl;
   else
      cout << "The 660 was found in BST (incorrect)." << endl;

   return 0;
   }


