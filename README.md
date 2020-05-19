# Competitive-Practice

This is my personal Repo to practice Competitive Programming and push code everyday for whatever I learn in a day.




* Set structures:
A set is a data structure that maintains a collection of elements. The basic
operations of sets are element insertion, search and removal.
The C++ standard library contains two set implementations: The structure
set is based on a balanced binary tree and the time complexity of its operations
is O(logn). The structure unordered_set uses hashing, and the time complexity
of its operations is O(1) on average.
*   The benefit in the set structure is that it maintains the order of the elements and
    provides functions that are not available in unordered_set. On the other hand,
    unordered_set is often more efficient.
*   A set can be used mostly like a vector, but it is not possible to access the
    elements using the [] notation.
*   An important property of sets is that all their elements are distinct. Thus,
    the function count always returns either 0 (the element is not in the set) or 1
    (the element is in the set), and the function insert never adds an element to the
    set if it is already there.


* Map structures
A map is a generalized array that consists of key-value-pairs.
The C++ standard library contains two map implementations that correspond
to the set implementations: the structure map is based on a balanced binary tree
and accessing elements takes O(logn) time, while the structure unordered_map
uses hashing and accessing elements takes O(1) time on average.


Iterators
An iterator is a variable that points to an element in a data structure.
The often used iterators begin and end define a range that contains all
elements in a data structure. The iterator begin points to the first element in the
data structure, and the iterator end points to the position after the last element.
The situation looks as follows:
{ 3, 4, 6, 8, 12, 13, 14, 17 }
  ↑                            ↑
s.begin()                   s.end()
s.begin() points to an element in the
data structure, while s.end() points outside the data structure. Thus, the range
defined by the iterators is half-open.

The function find(x) returns an iterator that points to an element whose
value is x. However, if the set does not contain x, the iterator will be end.

The function lower_bound(x) returns an iterator to the smallest element
whose value is at least x, and the function upper_bound(x) returns an iterator
to the smallest element whose value is larger than x. If such elements do not
exist, the return value of the functions will be end. These functions are not
supported by the unordered_set structure which does not maintain the order of
the elements
