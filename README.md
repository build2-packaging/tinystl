# tinystl - Core STL container and string C++ library

This is a `build2` package repository for
[`tinystl`](https://github.com/mendsley/tinystl), a tiny header-only
implementation of some core STL functionality.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`tinystl` in your `build2`-based project, then instead see the accompanying
[`libtinystl/PACKAGE-README.md`](libtinystl/PACKAGE-README.md) file.

The development setup for `tinystl` uses the standard `bdep`-based workflow.
For example:

```
git clone --recurse-submodules https://github.com/build2-packaging/tinystl.git
cd tinystl

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
