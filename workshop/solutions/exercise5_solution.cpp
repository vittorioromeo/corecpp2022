#include <cassert>
#include <utility>

template <typename F, typename G>
struct overload_two : F, G
{
    using F::operator();
    using G::operator();

    overload_two(F&& f, G&& g) : F{std::move(f)}, G{std::move(g)} {}
};

int main()
{
    overload_two o{
        [](int) { return 100; },
        [](char){ return 50; }
    };

    assert(o(0) + o('a') == 150);
}
