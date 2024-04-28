#include <algorithm>
#include <bitset>
#include <cassert>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <utility>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;
template <class T> using V = vector<T>;
template <class T> using P = pair<T, T>;
using ll = long long;

#ifdef LOCAL
template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p);
template <class T> ostream &operator<<(ostream &os, const V<T> &v);
template <class T> ostream &operator<<(ostream &os, const set<T> &s);
template <class T, class U>
ostream &operator<<(ostream &os, const map<T, U> &s);
template <class T> ostream &operator<<(ostream &os, const multiset<T> &s);
template <typename T, typename Container>
std::ostream &operator<<(std::ostream &os,
                         const std::priority_queue<T, Container> &pq);
template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
  return os << "P(" << p.first << ", " << p.second << ")";
}

template <class T> ostream &operator<<(ostream &os, const V<T> &v) {
  os << "[";
  bool first = false;
  for (auto d : v) {
    if (first)
      os << ", ";
    first = true;
    os << d;
  }
  return os << "]";
}

template <class T> ostream &operator<<(ostream &os, const set<T> &s) {
  os << "{";
  bool f = false;
  for (auto d : s) {
    if (f)
      os << ", ";
    f = true;
    os << d;
  }
  return os << "}";
}

template <class T, class U>
ostream &operator<<(ostream &os, const map<T, U> &s) {
  os << "{";
  bool f = false;
  for (auto p : s) {
    if (f)
      os << ", ";
    f = true;
    os << p.first << ": " << p.second;
  }
  return os << "}";
}
template <class T> ostream &operator<<(ostream &os, const multiset<T> &s) {
  os << "{";
  bool f = false;
  for (auto d : s) {
    if (f)
      os << ", ";
    f = true;
    os << d;
  }
  return os << "}";
}

// !!!! this requires number of elements order time !!!!
template <typename T, typename Container>
std::ostream &operator<<(std::ostream &os,
                         const std::priority_queue<T, Container> &pq) {
  std::priority_queue<T, Container> temp =
      pq; // Create a copy of the priority queue

  os << "[ ";
  while (!temp.empty()) {
    os << temp.top() << " "; // Output the top element
    temp.pop();              // Remove the top element
  }
  os << "]";

  return os;
}

struct PrettyOS {
  ostream &os;
  bool first;
  template <class T> auto operator<<(T &&x) {
    if (!first)
      os << ", ";
    first = false;
    os << x;
    return *this;
  }
};

template <class... T> void dbg0(T &&...t) {
  (PrettyOS{cerr, true} << ... << t);
}
#define dbg(...)                                                               \
  do {                                                                         \
    cerr << __LINE__ << " : " << #__VA_ARGS__ << " = ";                        \
    dbg0(__VA_ARGS__);                                                         \
    cerr << '\n';                                                              \
  } while (false);
#else
#define dbg(...)
#endif

int main() {
  int n;
  cin >> n;
  dbg(n);
}