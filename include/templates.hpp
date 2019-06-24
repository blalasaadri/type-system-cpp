#ifndef __TEMPLATES_HPP__
#define __TEMPLATES_HPP__

template <class T>
T GetMax (T a, T b);

// For an explanation as to why the implementation is here, check https://stackoverflow.com/a/34045596/2382246

template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

#endif