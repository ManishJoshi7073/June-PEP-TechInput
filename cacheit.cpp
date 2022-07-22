//Seat booking
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
long long solve(int N,int M,int *A,int *B)
{
    long long int i,j,ans;
    long long int **graph;
    graph=(long long int**)malloc(sizeof(long long int*)*N);
    for(i=0;i<N;i++)
    {
        graph[i]=(long long int*)malloc(sizeof(long long int)*N);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            graph[i][j]=0;
        }
    }
    for(i=0;i<M;i++)
    {
        graph[A[i]][B[i]]=1;
        graph[B[i]][A[i]]=1;
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lld ",graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int N;
    scanf("%d",&N);
    int M;
    scanf("%d",&M);
    int i_A;
    int *A=(int *)malloc(sizeof(int)*N);
    for(i_A=0;i_A<N;i_A++)
    {
        scanf("%d",&A[i_A]);
    }
    int i_B;
    int *B=(int *)malloc(sizeof(int)*M);
    for(i_B=0;i_B<M;i_B++)
    {
        scanf("%d",&B[i_B]);
    }
}
//Seat booking
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
long long solve(int N,int M,int *A,int *B)
{
    long long int i,j,ans;
    long long int **graph;
    graph=(long long int**)malloc(sizeof(long long int*)*N);
    for(i=0;i<N;i++)
    {
        graph[i]=(long long int*)malloc(sizeof(long long int)*N);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            graph[i][j]=0;
        }
    }
    for(i=0;i<M;i++)
    {
        graph[A[i]][B[i]]=1;
        graph[B[i]][A[i]]=1;
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%lld ",graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int N;
    scanf("%d",&N);
    int M;
    scanf("%d",&M);
    int i_A;
    int *A=(int *)malloc(sizeof(int)*N);
    for(i_A=0;i_A<N;i_A++)
    {
        scanf("%d",&A[i_A]);
    }
    int i_B;
    int *B=(int *)malloc(sizeof(int)*M);
    for(i_B=0;i_B<M;i_B++)
    {
        scanf("%d",&B[i_B]);
    }
}
