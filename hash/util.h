#ifndef _UTIL_H_
#define _UTIL_H_

#include "common.h"

size_t prime_hash(const std::string &key) {
  size_t hash = 0;
  for (const auto &c : key) {
    hash = hash * 31 + c;
  }
  return hash;
}

#endif //_UTIL_H_