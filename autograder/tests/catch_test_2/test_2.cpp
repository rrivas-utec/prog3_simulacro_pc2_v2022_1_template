//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include <list>
#include <iterator>
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
using namespace std;

template <typename T>
using iiter = istream_iterator<T>;
using integral_t = unsigned int;

static void question_2() {
    int n = 0;
    cin >> n;
    list<integral_t> fs(n);
    copy(iiter<integral_t>(cin), iiter<integral_t>(), begin(fs));
    auto rs = find_fibonacci(fs);
    copy(begin(rs), end(rs), ostream_iterator<integral_t>(cout, " "));
    cout << endl;
}

TEST_CASE("Question #2") {
    execute_test("test_2.in", question_2);
}