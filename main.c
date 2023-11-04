#include <mpi.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

 int main(int argc, char **argv) {
    if (argc < 4) {
        cout << "Input more than 3 args " << int(argc)-1 << '\n';
        return -1;
    }

    MPI_Init(&argc, &argv);

    return 0;
}

