// lowpos_test.cpp
// Glenn G. Chappell
// 29 Feb 2016
//
// For CS 372 Spring 2016
// Unit tests for function lowPositive
// Uses "Catch" C++ Unit-Testing Framework
// Making change for PR
// #define CATCH_CONFIG_MAIN  // We want Catch to write function main
// #include "catch.hpp"       // For the "Catch" unit-testing framework

// #include "lowpos.h"        // For function lowPositive
// #include <vector>
// using std::vector;
// #include <deque>
// using std::deque;
// #include <forward_list>
// using std::forward_list;


// // ***** Test Cases *****


// TEST_CASE("Single values: positive", "[lowpos]")
// {
//     vector<int> v1 = { 42 };
//     REQUIRE(lowPositive(v1.begin(), v1.end()) == 42);

//     vector<int> v2 = { 1 };
//     REQUIRE(lowPositive(v2.begin(), v2.end()) == 1);
// }


// TEST_CASE("Single values: zero or negative", "[lowpos]")
// {
//     vector<int> v1 = { 0 };
//     REQUIRE(lowPositive(v1.begin(), v1.end()) == 0);

//     vector<int> v2 = { -42 };
//     REQUIRE(lowPositive(v2.begin(), v2.end()) == 0);
// }


// TEST_CASE("Small ranges, containing positive", "[lowpos]")
// {
//     vector<int> v1 = { 15, -3, 20, 0, -2, 8, 14 };
//     REQUIRE(lowPositive(v1.begin(), v1.end()) == 8);

//     vector<int> v2 = { 10, 11, 12, 11, 10, 9, 10 };
//     REQUIRE(lowPositive(v2.begin(), v2.end()) == 9);
// }


// TEST_CASE("Small ranges, not containing positive", "[lowpos]")
// {
//     vector<int> v1 = { -10, -20, -30, -5, -100 };
//     REQUIRE(lowPositive(v1.begin(), v1.end()) == 0);

//     vector<int> v2 = { -1, -2, 0, -100, -3 };
//     REQUIRE(lowPositive(v2.begin(), v2.end()) == 0);

//     vector<int> v3 = { 0, 0, 0, 0, 0 };
//     REQUIRE(lowPositive(v2.begin(), v2.end()) == 0);
// }


// TEST_CASE("Large range, containing positive", "[lowpos]")
// {
//     vector<int> v1;
//     const int bigval = 50000;  // For making other values
//     for (int i = 0; i < bigval; ++i)
//     {
//         v1.push_back(4*bigval-2*i);
//         v1.push_back(-2*bigval-2*i);
//         v1.push_back(3*bigval+2*i);
//         v1.push_back(-4*bigval+2*i);
//     }
//     REQUIRE(lowPositive(v1.begin(), v1.end()) == 2*bigval+2);
// }


// TEST_CASE("Large range, not containing positive", "[lowpos]")
// {
//     vector<int> v1;
//     const int bigval = 50000;  // For making other values
//     for (int i = 0; i < bigval; ++i)
//     {
//         v1.push_back(-2*bigval-2*i);
//         v1.push_back(-4*bigval+2*i);
//     }
//     REQUIRE(lowPositive(v1.begin(), v1.end()) == 0);
// }


// TEST_CASE("Other kinds of ranges", "[lowpos]")
// {
//     // std::deque using reverse iterators, one item skipped
//     deque<int> dd = { 10, -9, 5, 0, 20, 1 };
//     REQUIRE(lowPositive(dd.rbegin()+1, dd.rend()) == 5);

//     // std::forward_list
//     forward_list<int> fl = { 10, -9, 5, 0, 20 };
//     REQUIRE(lowPositive(fl.begin(), fl.end()) == 5);

// }

