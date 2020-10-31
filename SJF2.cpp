
 #include <bits/stdc++.h>
 using namespace std;
 double tavg=0.0,wavg=0.0;
 const int context=1;
  void input(int a[],int b[],int n)
 {
   cout << "Enter arrival time of process"  << endl;
   for(int i=0;i<n;i++)
   {
       cin >> a[i];
   }
   cout << "Enter burst time of process"  << endl;

   for(int i=0;i<n;i++)
   {
       cin >> b[i];
   }
 }
 void waitingTime(int a[],int b[],int c[],int w[],int n)
 {
     //computing completion time;
     int time=context;
     c[0]=time+b[0];
     w[0]=time-a[0];
     time=c[0];

     bool vis[n]={false};
     vis[0]=false;
     int mini=INT_MAX;
     int procnt=1;
     int j;
     while(procnt<=n)
     {
       for(int i=1;i<n;i++)
       {
         if(a[i]<time&&vis[i]==false)
         {
             if(b[i]<mini)
             {
                 j=i;
                 b[i]=mini;
             }
         }
       }
      if(!vis[j])
      {
          vis[j]=true;
             time+=context;

             if(time>=a[j])
             {
                 c[j]=time+b[j];
                 w[j]=time-a[j];
                 time=c[j];
             }
             else
             {
                 w[j]=0;
                 c[j]=a[j]+b[j];
                 time=c[j];
             }
             procnt++;
      }
   }
 }
 void turnaroundTime(int b[],int w[],int t[],int n)
{
    for(int i=0;i<n;i++)
   {
     t[i]=w[i]+b[i];
     tavg+=t[i];
   }
}
void output(int c[],int w[],int t[],int n)
{
    cout << "Completion     Waiting time    " << "Turnaround Time" << endl ;
    for(int i=0;i<n;i++)
      {
          cout << c[i] << "                  "<< w[i] << "                   " << t[i] << endl;
       }

}
 int main()
 {
   cout << "Enter no of process" << endl;
   int n;
   cin >> n;
   int a[n],b[n],c[n],w[n],t[n];
   input(a,b,n);
   waitingTime(a,b,c,w,n);
   turnaroundTime(b,w,t,n);
   tavg=tavg/(double)n;
   wavg=wavg/(double)n;
   output(c,w,t,n);
   cout << "Average Waiting Time "  <<  wavg << endl;
   cout << "Average Turnaround Time "  <<  tavg << endl;


 }

