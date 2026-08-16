// UnitTest++ to Catch2 v3 compatibility shim.
//
// Upstream tests include <UnitTest++.h> and use TEST(name) / CHECK(expr).
// Catch2 v3 provides CHECK() from <catch2/catch_test_macros.hpp> but not
// TEST(). This header is found first via -I so those includes and macros
// stay as written. Include paths <TINYSTL/...> are patched separately to
// <tinystl/...>. This header is packaging-only and is not installed.

#ifndef TINYSTL_UNITTESTPP_SHIM
#define TINYSTL_UNITTESTPP_SHIM

#include <catch2/catch_test_macros.hpp>

#define TEST(name) TEST_CASE(#name)

#endif
