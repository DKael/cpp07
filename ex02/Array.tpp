template <typename T>
Array<T>::Array() : arrPtr(NULL), len(0) {
  std::cout << "Array object created without parameter.\n";
}

template <typename T>
Array<T>::Array(unsigned int n) : len(static_cast<std::size_t>(n)) {
  arrPtr = new T[n];
  if (arrPtr == NULL) {
    throw std::bad_alloc();
  }
  std::cout << "Array object created with size " << len << " \n";
}

template <typename T>
Array<T>::Array(const Array<T>& origin) : len(origin.len) {
  arrPtr = new T[len];
  if (arrPtr == NULL) {
    throw std::bad_alloc();
  }
  for (std::size_t i = 0; i < len; i++) {
    arrPtr[i] = origin.arrPtr[i];
  }
  std::cout << "Array object created base on another Array object\n";
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& origin) {
  if (this != &origin) {
    delete[] arrPtr;
    len = origin.len;

    arrPtr = new T[len];
    if (arrPtr == NULL) {
      throw std::bad_alloc();
    }
    for (std::size_t i = 0; i < len; i++) {
      arrPtr[i] = origin.arrPtr[i];
    }
  }
  std::cout << "Array class's assign operator called\n";
  return *this;
}

template <typename T>
Array<T>::~Array() {
  std::cout << "Array object destructor called. Delete arr.\n";
  delete[] arrPtr;
}

template <typename T>
std::size_t Array<T>::size() const {
  return len;
}

template <typename T>
T& Array<T>::operator[](const std::size_t idx) {
  if (idx >= len) {
    throw std::exception();
  }
  return arrPtr[idx];
}

template <typename T>
const T& Array<T>::operator[](const std::size_t idx) const {
  if (idx >= len) {
    throw std::exception();
  }
  return arrPtr[idx];
}
