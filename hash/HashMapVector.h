#ifndef _HASH_MAP_VECTOR_
#define _HASH_MAP_VECTOR_

#include "IHashMap.h"

template <typename T> class HashMapVector : public IHashMap<T> {
private:
  std::vector<T> v_data;

public:
  HashMapVector() : v_data(nullptr) {};
  ~HashMapVector() = default;
  virtual void insert(const std::string &key, T data) override = 0;
  virtual T find(const std::string &key) const override final;
  virtual void remove(const std::string &key) override = 0;
};

template <typename T> class HashMapVectorLP : public HashMapVector<T> {
public:
  virtual void insert(const std::string &key, T data) override final;
  virtual void remove(const std::string &key) override final;
};

template <typename T> class HashMapVectorQP : public HashMapVector<T> {
  virtual void insert(const std::string &key, T data) override final;
  virtual void remove(const std::string &key) override final;
};

#endif //_HASH_MAP_VECTOR_