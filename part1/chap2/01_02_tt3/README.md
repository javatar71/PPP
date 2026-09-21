### TRY THIS 3.1
Execute this program yourself using a piece of paper. Use the input The cat cat
jumped.
 Even experienced programmers use this technique to visualize the actions
of small sections of code that somehow don’t seem completely obvious.

### TRY THIS 3.2
Get the ‘‘repeated word detection program’’ to run. Test it with the sentence
```
She she laughed "he he he!" because what he did did not look very very good good.
```
How many
repeated words were there? Why? What is the deﬁnition of word used here? What
is the deﬁnition of repeated word? (For example, is She she a repetition?)

>As input separated by whitespace, program considers this exact sequence.
>At first, as a string just a sequence of chars which encoded with 8bit number and case sensitive "She" and "she" different strings.
>At second, construction "he he he!" considered as different strings: '"he', 'he', and 'he!"', so in general this is different chars sequences, so they ain't equal.
>But words "did", "very" and "good" will be considered as repeated, because it's meets by char sequence.
