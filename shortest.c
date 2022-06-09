#include <stdio.h>
int main(){
int wt[20],tr[20],br[20];
int n;
char pn[20];
int temp=0,sum=0,s=0;
printf("Enter no.of processes \n");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter process name\n");
scanf("%s",&pn[i]);
printf("Enter brust time of process\n");
scanf("%d",&br[i]);
}
for(int j=0;j<n-1;j++){
for(int k=0;k<n-j-1;k++){
if(br[k]>br[k+1]){
temp=br[k];
br[k]=br[k+1];
br[k+1]=temp;

temp=pn[k];
pn[k]=pn[k+1];
pn[k+1]=temp;

}
}
}
wt[0]=0;
tr[0]=br[0];
for(int p=1;p<n;p++){
   sum+=wt[p];
   s+=tr[p];
wt[p]=wt[p-1]+br[p-1];
tr[p]=tr[p-1]+br[p];

}
printf("Process\t\tBurst_time\tWaiting time\tTrun_around_time\n");
for(int i=0;i<n;i++){
 
printf("%d\t\t",pn[i]);
printf("%d\t\t",br[i]);
printf("%d\t\t",wt[i]);
printf("%d\t\t\n",tr[i]);

}
printf("Avg waiting time %d\n",sum/n);
printf("Avg trun around time %d\n",s/n);
return 0;
}




