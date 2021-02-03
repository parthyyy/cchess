"""
Convert a bit index to (i,j) coordinates
COORDINATES ARE ZERO-INDEXED

example: bit index 50 = (2, 7)

I whipped together this script to quickly
check if this conversion worked
cchess's algorithm will require me to be able
to convert between bit indexes and (i,j) coordinates

It me helps with planning with pseudocode.

"""


index = int(input(">>> ").strip())

i = index % 8
j = ((index - i) // 8)

print(f"({i:d}, {j:d})")
