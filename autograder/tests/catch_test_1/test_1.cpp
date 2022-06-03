//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void  question_1() {
    // Caso de uso #1
    int n = 0;
    cin >> n;
    vector<int> vec1(n);
    vector<int> vec2(n);
    for(auto& item: vec1)
        cin >> item;
    for(auto& item: vec2)
        cin >> item;
    cout << boolalpha << valores_iguales(vec1, vec2) << endl;
    // Caso de uso #2
    deque<int> deq1(n);
    list<int> lis1(n);
    for(auto& item: deq1)
        cin >> item;
    for(auto& item: lis1)
        cin >> item;
    cout << boolalpha << valores_iguales(deq1, lis1) << endl;
}

TEST_CASE("Question #1") {
    execute_test("test_1.in", question_1);
}