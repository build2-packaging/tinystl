# libtinystl - Core STL container and string C++ library

This is a `build2` package for the [tinystl](https://github.com/mendsley/tinystl)
C++ library. It provides a tiny, header-only implementation of some core STL
functionality, including `vector`, `string`, `string_view`, `unordered_map`,
and `unordered_set`.

This package tracks upstream commit
`c51bc42011eb4920df09408d996921547200e2fd`. Upstream does not publish
releases. Correctness fixes from the tinystl fork used by `bx`/`bgfx` (same
author) are applied as `.orig`/`.patch` files.


## Usage

To start using `libtinystl` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libtinystl ^0.0.1
```

Then import the library in your `buildfile`:

```
import libs = libtinystl%lib{tinystl}
```


## Importable targets

This package provides the following importable targets:

```
lib{tinystl}
```

This is a binless (header-only) library. Public headers are included as
`<TINYSTL/vector.h>` etc.


## Configuration variables

This package has no configuration variables.
