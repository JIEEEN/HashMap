#ifndef _HASH_MAP_VECTOR_
#define _HASH_MAP_VECTOR_

#include "IHashMap.h"

template <typename T> class HashMapVector : public IHashMap<T> {
private:
  std::vector<T> v_data;

public:
  HashMapVector() : v_data(nullptr) {};
  ~HashMapVector() = default;
  virtual void insert(const std::string &key, T data) final;
  virtual T find(const std::string &key) const final;
  virtual void remove(const std::string &key) final;

private:
};

#endif //_HASH_MAP_VECTOR_