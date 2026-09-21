### Notes
#### Try This №3
>As input separated by whitespace, program considers this exact sequence.
>At first, as a string just a sequence of chars which encoded with 8bit number and case sensitive "She" and "she" different strings.
>At second, construction "he he he!" considered as different strings: '"he', 'he', and 'he!"', so in general this is different chars sequences, so they ain't equal.
>But words "did", "very" and "good" will be considered as repeated, because it's meets by char sequence.

#### Try This №4
> Main -> main (there's no entrypoint 'Main')
> STRING -> string (STRING type doesn't exsists)
> c0ut -> cout (typo 0 -> o)
> S -> s (variables case-sensitive)

#### Try This №5

> For small values for char they are in range of unprintable characters (up to 32, conduct to ASCII table), double same as integer. 
> For large values for char they are above ASCII table (more than 127 index), double same as integer. But as theres narrowing from into to char, significant bytes "cutting off", for example, if we want to get letter 'a', its 97, or 0x61. So, as 0x61 is 1 byte value, and char have only 1 byte, we can add extra byte, so output shouldn't change. Let's take 0x261, and this is 97+512 = 609 in decimal.
```
609
double is 609 integer is 609 char is a

```
> So, it's worked, as expected.
> For other cases: if it's in printable range of ASCII table (32-126), theres printable char output. For float-point numbers, for int it's narrowing to integer, for char same, (56.9 and 56.2 meets same character). 
