#include<stdio.h>
 #include<stdlib.h>
 intkey[20],n,m;
 int*ht,index;
 intcount=0;
 void insert(intkey)
 {
      index=key%m;
      while(ht[index]!=-1)
      {
             index=(index+1)%m;
      }
      ht[index]=key;
      count++;
 }
 void display()
 {
      inti;
      if(count==0)
     {
             printf("\nHashTableisempty");
             return;
      }
      printf("\nHashTablecontentsare:\n");
      for(i=0;i<m;i++)
           printf("\nT[%d]-->%d",i,ht[i]);
 }
 voidmain()
 {
     inti;
     printf("\nEnterthenumberofemployee records(N):  ");
     scanf("%d",&n);
     printf("\nEnterthetwodigitmemorylocations(m)forhashtable:  ");
     scanf("%d",&m);
     ht=(int*)malloc(m*sizeof(int));
     for(i=0;i<m;i++)
           ht[i]=-1;
     printf("\nEnterthefourdigitkeyvalues(K)forNEmployeeRecords:\n ");
     for(i=0;i<n;i++)
          scanf("%d",&key[i]);
     for(i=0;i<n;i++)
    {
          if(count==m)
          {
            printf("\nHashtableisfull.Cannotinserttherecord%dkey",i+1);
            break;
          }
          insert(key[i]);
  }
       display();
 }
