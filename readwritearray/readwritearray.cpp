#include <cstdio>
#include <iostream>

void read_file(char ls1[], size_t size){
    printf("This array of characters is %d characters long:\t%s\n",size-1,ls1); // extra element for terminator
}

void write_to(char ls1[], size_t index, size_t arrsize, char letter){ // writes letter into array
    if(index > arrsize-1) {
        std::cerr << "Error: Buffer overflow.";
        return;
    }
    ls1[index] = letter;
}

int main() {
    char ranarray[] = "Progra!m!ng";
    char* arrayptr = ranarray; // Equivalent: &ranarray[0]
    size_t size{sizeof(ranarray)};
    // no need for references or pointers because arrays decay into pointers when passed (&ptr[0])
    read_file(ranarray,size);
    write_to(ranarray, 6, size, 'm');
    write_to(ranarray, 8, size, 'i');
    read_file(ranarray,size);

    // this will produce a buffer overflow because the bound does not exist
    write_to(ranarray, 12, size, 'b');

    //for(auto x : ranarray) // in case you wanted to print each element using a range based for loop
    //    printf("%c",x);
}
