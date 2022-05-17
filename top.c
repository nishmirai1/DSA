#include<stdio.h>
int a[10][10],n,w,count=0,visited[20],top[10],k=0;
void dfs(int v)
{
int w;
count++;
visited[v]=count;
for(w=0;w<n;w++)
if(visited[w]==0&&a[v][w]==1)
dfs(w);
top[k++]=v;
}
void main()
{
int i,j;
printf("\nEnter the number of vertices");
scanf("%d",&n);
printf("\nEnter the matrix...");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("The adjecency matrix is\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf(".......DFS traversal.....\n");
for(i=0;i<n;i++)
visited[i]=0;
dfs(0);
printf("\n-----------Topology sorting-----------\n");
for(i=n-1;i>=0;i--)
printf("%d\t",top[i]);
if(count==n)
printf("\nGraph is connected");
else
printf("\nGraph is not connected");
}



