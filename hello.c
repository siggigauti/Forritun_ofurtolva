#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv){
	int rank, size;

	MIP_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	printf("Hello world, I am %d of %d\n", rank, size)

	MPI_Finalized();
	return 0;
}