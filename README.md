# Memlist
Memlist is a minimalistic wrapper for malloc. It can store allocations in a linked list and the items can be released (free'd) individually. Alternatively, all reserved memory can be released immediately, e.g. in the case of a sudden exit.

## Build

    make

or include the files in your project

## Usage

* Allocate memory with `void *reserve(size_t bytes)`
* Free memory with `void release(void *mem)`
* Release all memory with `void release_all()`
* Add a manually allocated memory segment to the memlist `void memlist_add(void *mem)`


