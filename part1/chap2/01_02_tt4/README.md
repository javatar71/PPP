### TRY THIS
Compile the ‘‘Goodbye, cruel world!’’ program and examine the error messages.
Did the compiler ﬁnd all the errors? What did it suggest as the problems? Did the
compiler get confused and diagnose more than four errors? Remove the errors one
by one, starting with the lexically ﬁrst, and see how the error messages change (and
improve).

```
int Main()
{
    std::STRING s = "Goodbye, cruel world! ";
    std::cOut << S << '\n';
}

```
> Main -> main (there's no entrypoint 'Main')
> STRING -> string (STRING type doesn't exsists)
> c0ut -> cout (typo 0 -> o)
> S -> s (variables case-sensitive)
