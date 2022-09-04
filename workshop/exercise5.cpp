// The goal of this exercise is to implement an `overload_two` utility which,
// when constructed with exactly two callable objects `f` and `g`, behaves as
// an overload set of `f` and `g`. See `main` for an usage example.

#include <cassert>
#include <utility>

// TODO: implement the `overload_two` class below.

int main()
{
    overload_two o{
        [](int) { return 100; },
        [](char){ return 50; }
    };

    assert(o(0) + o('a') == 150);
}
