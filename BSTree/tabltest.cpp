/* Filename:  tabltest.cpp

   Programmer:  Br. David Carlson

   Date:  October 10, 1997

   Last Modified:  December 4, 2001

   This program creates an empty table of type BSTTableClass and uses
   the class's Insert function to insert some data items.  It then uses
   the class's Retrieve function to look up the data stored in the table,
   displaying all results on the screen.  The Empty function is also
   checked.

   Tested with:
      Microsoft Visual C++ 6.0
      Microsoft Visual C++ .NET
      g++ under Linux
*/

#include "bsttable.h"


int main(void)
   {
   BSTTableClass Table;
   ItemType Temp, Item;

   if (Table.Empty())
      cout << "Table is empty (correct)" << endl;
   else
      cout << "Table is not empty (incorrect)" << endl;

   // A primitive way to insert data, but it will suffice for a test:
   cout << "Inserting data" << endl;

   Temp.KeyField = 234;
   Temp.DataField = 23.4f;
   Table.Insert(Temp);

   Temp.KeyField = 345;
   Temp.DataField = 34.5f;
   Table.Insert(Temp);

   Temp.KeyField = 678;
   Temp.DataField = 67.8f;
   Table.Insert(Temp);

   Temp.KeyField = 312;
   Temp.DataField = 31.2f;
   Table.Insert(Temp);

   Temp.KeyField = 451;
   Temp.DataField = 45.1f;
   Table.Insert(Temp);

   Temp.KeyField = 206;
   Temp.DataField = 20.6f;
   Table.Insert(Temp);

   Temp.KeyField = 359;
   Temp.DataField = 35.9f;
   Table.Insert(Temp);

   Temp.KeyField = 656;
   Temp.DataField = 65.6f;
   Table.Insert(Temp);

   if (Table.Empty())
      cout << "Table is empty (incorrect)" << endl;
   else
      cout << "Table is not empty (correct)" << endl;

   if (Table.Retrieve(345, Item))
      cout << "Data field for 345 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 345 not found (incorrect)" << endl;

   if (Table.Retrieve(656, Item))
      cout << "Data field for 656 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 656 not found (incorrect)" << endl;

   if (Table.Retrieve(359, Item))
      cout << "Data field for 359 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 359 not found (incorrect)" << endl;

   if (Table.Retrieve(206, Item))
      cout << "Data field for 206 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 206 not found (incorrect)" << endl;
   //
   if (Table.Retrieve(234, Item))
      cout << "Data field for 234 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 234 not found (incorrect)" << endl;

   if (Table.Retrieve(678, Item))
      cout << "Data field for 678 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 678 not found (incorrect)" << endl;

   if (Table.Retrieve(312, Item))
      cout << "Data field for 312 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 312 not found (incorrect)" << endl;

   if (Table.Retrieve(451, Item))
      cout << "Data field for 451 contains " << Item.DataField << 
         " (correct)" << endl;
   else
      cout << "Item 451 not found (incorrect)" << endl;

   return 0;
   }


