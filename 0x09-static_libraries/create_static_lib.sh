#!/bin/bash

# Compile all .c files in the current directory into object files
for file in *.c; do
    gcc -c "$file"
done

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o

echo "Static library liball.a created from all .c files in the current directory."

