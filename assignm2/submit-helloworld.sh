#!/bin/bash
#SBATCH -J helloworld-example
#SBATCH -n 1
#SBATCH --mail-user=sgs31@hi.is
#SBATCH --mail-type=end
module load gnu
# openmpi

# mpirun

export OMP_NUM_THREADS=4

/home/sgs31/folderthing/filename