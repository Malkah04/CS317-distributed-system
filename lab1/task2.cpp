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
    

    //question 2 :print five elements for each processor
    int a=5; 
    int start = myid*a+1;
    int end = start +a -1;
   printf("processor %d \n" ,myid );
    for (int i=start ; i<=end ; i++){
       cout<< i <<endl;
    }
    
    MPI_Finalize();

    return 0;

}