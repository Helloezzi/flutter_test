#ifndef UTIL_H_
#define UTIL_H_

#include <iostream>
#include <regex>

namespace morai::comm {
    template<typename T>
    static const T& Min(const T& a, const T& b) {
        return b < a ? b : a;
    }

    template<typename T>
    static const T& Max(const T& a, const T& b) {
        return a < b ? b : a;
    }
}

#endif 