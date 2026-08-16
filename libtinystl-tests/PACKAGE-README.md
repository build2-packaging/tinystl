# libtinystl-tests - Tests for the libtinystl C++ library

This is a `build2` test package for
[tinystl](https://github.com/mendsley/tinystl). It runs the upstream unit
tests on Catch2 v3. A packaging-only `UnitTest++.h` shim maps the original
`TEST()`/`CHECK()` macros so the test sources stay unmodified.

It is pulled in automatically when you test `libtinystl` (via the `tests:`
manifest field). You do not need to depend on this package directly.


## Usage

To start using `libtinystl-tests` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * libtinystl-tests ^0.0.1
```

Then import the executable in your `buildfile`:

```
import driver = libtinystl-tests%exe{libtinystl-tests}
```

Typical consumers should depend on `libtinystl` instead and let `bpkg test`
bring this package in.


## Importable targets

This package provides the following importable targets:

```
exe{libtinystl-tests}
```

This is the Catch2 test driver for `libtinystl`. It is not installed.


## Configuration variables

This package has no configuration variables.
