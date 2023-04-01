	 #include<stdio.h>
	 #include<conio.h>
	 void main()
	 {
	int  arr[100],n,i,j,temp;
	clrscr();
	 printf("enter the array size :");
	 scanf("%d",&n);
	 printf("enter the element :");
	 for(i=0;i<n;i++){
	 scanf("%d",&arr[i]);
	 }
	 for(j=0;j<n-1;j++){
	 for(i=0;i<n-1;i++){
	if (arr[i]>arr[i+1]){
	temp=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
	  }
	  }
	  }
	 for(i=0;i<n;i++){
	 printf("%d\t",arr[i]);
	 }
	 getch();
	 }