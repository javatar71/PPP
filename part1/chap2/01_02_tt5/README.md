### TRY THIS

Run this program with a variety of inputs:
- Small values (e.g., 2 and 3).
- Large values (larger than 127, larger than 1000).
- Negative values.
- 56, 89, and 128.
- Non-integer values (e.g., 56.9 and 56.2).
You’ll ﬁnd that many inputs produce ‘‘unreasonable’’ results when converted. Basi-
cally, we are trying to put a gallon into a pint pot (about 4 liters into a 500ml glass).

> For small values for char they are in range of unprintable characters (up to 32, conduct to ASCII table), double same as integer. 
> For large values for char they are above ASCII table (more than 127 index), double same as integer. But as theres narrowing from into to char, significant bytes "cutting off", for example, if we want to get letter 'a', its 97, or 0x61. So, as 0x61 is 1 byte value, and char have only 1 byte, we can add extra byte, so output shouldn't change. Let's take 0x261, and this is 97+512 = 609 in decimal.
```
609
d==609 i==609 c==a char(a)

```
> So, it's worked, as expected.
> For other cases: if it's in printable range of ASCII table (32-126), theres printable char output. For float-point numbers, for int it's narrowing to integer, for char same, (56.9 and 56.2 meets same character). 
