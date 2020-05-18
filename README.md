# Competitive-Practice

This is my personal Repo to practice Competitive Programming and push code everyday for whatever I learn in a day.




Set structures:
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