# c_bitfields_integer_promotion

Little experiment to check how integer promotion affects bitfields.

The interest in this came after the discussion at <https://lore.kernel.org/all/6ab8c7fd-c718-49ff-bbbb-9241293127f7@intel.com/t/#u>

Turns out that for bitfields bigger than `sizeof(int)` the behavior is compiler dependent.

<https://github.com/Marcondiro/c_bitfields_integer_promotion/blob/55cff6441aa995a15e08f63afbc31337053493d7/main.c#L1-L33>

## A bunch of related links

<https://gcc.gnu.org/onlinedocs/gcc/Structures-unions-enumerations-and-bit-fields-implementation.html>

<https://stackoverflow.com/questions/2647320/struct-bitfield-max-size-c99-c>

<https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#Bit-Fields>

<https://archive.org/details/the-ansi-c-programming-language-by-brian-w.-kernighan-dennis-m.-ritchie.org/page/132/mode/2up>

<https://stackoverflow.com/questions/32529080/should-bit-fields-less-than-int-in-size-be-the-subject-of-integral-promotion>

<https://stackoverflow.com/questions/46073295/implicit-type-promotion-rules>
