/* Filename:  itemtype.cpp

   Programmer:  Br. David Carlson

   Date:  October 7, 1997

   Modified:  August 8, 1998.

   This file provides the overloaded equality, <, and > operators as
   shown in itemtype.h.
*/

#include "itemtype.h"


/* Given:  First   An ItemType data item.
           Second  An ItemType data item.
   Task:   To decide if First and Second are equal based on their KeyField.
   Return: true if they are equal, false otherwise
*/
bool operator== (const ItemType & First, const ItemType & Second)
   {
   return (First.KeyField == Second.KeyField);
   }


/* Given:  First   An ItemType data item.
           Second  An ItemType data item.
   Task:   To decide if First > Second based on their KeyField.
   Return: true if so, false otherwise
*/
bool operator> (const ItemType & First, const ItemType & Second)
   {
   return (First.KeyField > Second.KeyField);
   }


/* Given:  First   An ItemType data item.
           Second  An ItemType data item.
   Task:   To decide if First < Second based on their KeyField.
   Return: true if so, false otherwise
*/
bool operator< (const ItemType & First, const ItemType & Second)
   {
   return (First.KeyField < Second.KeyField);
   }


