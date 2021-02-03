# usage: $ python gen_moves.py piece starting_square outfile_name.txt
# example: $ python gen_moves.py rook c2 outrook.txt
#          $ python gen_moves.py queen g8 outqueen.txt

from sys import argv

files = 'abcdefgh'
nums = '12345678'

start = argv[2]

with open(argv[3], "w") as out:
    for f in files:
        for n in nums:
            if f"{f}{n}" != start:
                uci = start + f + n
                #out.write(f"if (verify_{argv[1]:s}_move(\"{uci:s}\")) {printf(\"{uci:s}\\n\");}\n")
                out.write("if (verify_" + argv[1] + "_move(\"" + uci + "\")) {printf(\"" + uci + "\\n\");}\n")
