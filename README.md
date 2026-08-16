# tinystl - <SUMMARY>

This is a `build2` package repository for [`tinystl`](https://<UPSTREAM-URL>),
a <SUMMARY-OF-FUNCTIONALITY>.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`tinystl` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](<PACKAGE>/PACKAGE-README.md) file.

The development setup for `tinystl` uses the standard `bdep`-based workflow.
For example:

```
git clone .../tinystl.git
cd tinystl

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
