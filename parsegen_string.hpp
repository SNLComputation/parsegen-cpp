#ifndef OMEGA_H_STRING_HPP
#define OMEGA_H_STRING_HPP

#include <string>

namespace parsegen {

/* some wrappers over std::string to let us
   do all indexing with int */

inline int size(std::string const& s) { return int(s.size()); }

inline typename std::string::reference at(std::string& s, int i) {
  assert(0 <= i);
  assert(i < int(s.size()));
  return s[std::size_t(i)];
}

inline typename std::string::const_reference at(std::string const& s, int i) {
  assert(0 <= i);
  assert(i < int(s.size()));
  return s[std::size_t(i)];
}

}  // namespace parsegen

#endif