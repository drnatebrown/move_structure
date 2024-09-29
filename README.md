# move_structure
Table Representation of runs-compressed BWT Supporting Backwards Stepping

# Example
### Download and Compile

```console
git clone https://github.com/drnatebrown/move_structure.git
cd move_structure

make
```

To compile using debug flags:
```console
make clean
make debug
```

### Build
Builds the data structure on the given <FILENAME>.bwt, outputting <FILENAME>.LF_move
```console
./build ./data/dna.txt
```

### Inversion
Pass <FILENAME> (assuming build has been run) and <INVERT_FILENAME>

To give the pattern explicitly, i.e. `"GATTACAT"`:
```console
./invert ./data/dna.txt ./data/dna.txt.rev
```

To verify correctness:
```console
rev dna.txt.rev | diff - dna.txt
```
