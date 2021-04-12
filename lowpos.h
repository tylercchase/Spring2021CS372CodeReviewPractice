// lowpos.h
// Glenn G. Chappell
// 29 Feb 2016
//
// For CS 372 Spring 2016
// Header for function lowPositive
// There is no associated source file
// Example Code for Code Review


// *********************************************************************
// * NOTE: This file is intended as practice for code review. It may   *
// * have problems. Please do not use it as a basis for your own code! *
// *********************************************************************
// Making a change for a PR

// lowPositive
// Given range of int values, return least positive value in the range,
// or 0 if the range contains no positive value.
// Preconditions:
//     [first, last) is a valid range.
// Postconditions:
//     The return value is the least positive value in the range, or 0
//      if the range contains no positive value.
// Requirements on Types:
//     FDIter is a forward iterator type.
//     The value type of FDIter is int.
// Since this is a template, we define it here, and not in a .cpp file.
template <typename FDIter>
int lowPositive(FDIter first, FDIter last)
{
    int minval;  // Holds least positive value so far, or zero if none

    // Initialize minval appropriately
    if (*first > 0)
        minval = *first;
    else
        minval = 0;

    // Go through each item in range, updating minval as needed
    for (FDIter it = first;
         it != last;
         ++it)
    {
        if (*it <= 0)  // Zero or negative? Skip it
            continue;
        if (*it < minval)  // Positive & below minval? Update minval
            minval = *it;
    }

    // Done; minval is our result
    return minval;
}

