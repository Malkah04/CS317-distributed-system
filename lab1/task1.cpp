#include <iostream>
#include <mpi.h>
#include <unistd.h>
using namespace std;
// array of string char **argv
// number of arguments int argc
int main(int argc ,char **argv){
    int myid ,np;
    MPI_Init(&argc ,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD ,&myid); //retrun my id in the task
    MPI_Comm_size(MPI_COMM_WORLD ,&np); //return number of tasks (computers)
   
    // if process id is even print im even ,else im odd

    if(myid%2==0){
       printf("im even worker node for processer %d \n " ,myid);
    }
    else{
       printf("im odd worker node for processer %d \n" ,myid);
    }

  
    MPI_Finalize();

    return 0;

}