#ifndef _HASH_MAP_LINKED_LIST_
#define _HASH_MAP_LINKED_LIST_

#include "IHashMap.h"

template <typename T> class HashMapLinkedList : public IHashMap<T> {
private:
  std::vector<T *> v_p_data;

public:
  HashMapLinkedList() : v_p_data(nullptr) {};
  ~HashMapLinkedList() = default;
  virtual void insert(const std::string &key, T data) override final;
  virtual T find(const std::string &key) const override final;
  virtual void remove(const std::string &key) override final;
};

#endif //_HASH_MAP_LINKED_LIST_