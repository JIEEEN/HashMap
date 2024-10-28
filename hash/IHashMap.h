#ifndef _I_HASH_MAP_
#define _I_HASH_MAP_

#include "common.h"

template <typename T> class IHashMap {
public:
  virtual ~IHashMap() = default;
  virtual void insert(const std::string &key, T data) = 0;
  virtual T find(const std::string &key) = 0;
  virtual void remove(const std::string &key) = 0;
};

#endif //_I_HASH_MAP_