#include <tinystl/string.h>
#include <tinystl/vector.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  tinystl::vector<int> v;
  assert (v.empty ());
  v.push_back (1);
  v.push_back (2);
  assert (v.size () == 2);
  assert (v[0] == 1);
  assert (v[1] == 2);

  tinystl::string s ("ok");
  assert (s.size () == 2);
  assert (s[0] == 'o');
  assert (s[1] == 'k');
}
