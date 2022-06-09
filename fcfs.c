#include <stdio.h>
int main(){
int r[50];
int n;

int wt=0,tr=0;
int sum=0;

printf("Enter no.of process\n");
scanf("%d",&n);
for(int j=0;j<n;j++){
printf("Enter burst time of %d process\n",j+1);
scanf("%d",&r[j]);
}
printf("Process\t\tBurst_time\tWaiting time\tTrun_around_time\n");
for(int i=0;i<n;i++){
tr+=r[i];
printf("P%d\t\t",(i+1));
printf("%d\t\t",r[i]);
printf("%d\t\t",wt);
printf("%d\t\t\n",tr);
sum+=wt;
wt+=r[i];
}
printf("%d\n",sum);
printf("Avg waiting time %d\n",sum/n);
return 0;
}
