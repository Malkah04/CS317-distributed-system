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
  
    //question 3 : distribute the task of summing numbers from 1 to 100 among multiple processes 

    int n=100;
    int b =n/np;
    int start = myid*b+1;
    int end = start +b-1;
      int sum =0;
    for(int i=start;i<=end;i++){
      sum += i;
    }
    printf("processor %d sum is : %d \n" ,myid ,sum);
    MPI_Finalize();

    return 0;

}