### Chapter 3

Expressing computation should be: efficient, simple and correct.

Two variants of expressing computation:
Abstraction - hiding unnecessary implementation details.
Dividing - split big task for smaller ones. 

Structure and foundation of programm is very important.

`constexpt` - is compile-time constant and `const` is compile or run-time constant.

Avoid two and more comparison such as `a < b < c`, because it's `(a < b) < c`, does not equals `(a < b) && (b < c)`.

Switch-case principles: comparison value is int, char or enum. Only expressions can be used in `case`. Same expressions can't be used in different `case`. End `case` with `break`. Use `[[fallthrough]]` to notice, that not breaking switch-case with `break` statement is as intended.

A function is a named sequence of statements. May take (or not) arguments and return (or not) objects.
