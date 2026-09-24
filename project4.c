

#include <stdio.h>

int main(){
	
	int book_ID,due_date,return_date,days_overdue,fine_amount,fine_rate;


	printf("Enter the book ID \t");
	scanf("%d",& book_ID);
	
	printf("Enter the book due date \t");
	scanf ("%d",& due_date);
	
	printf("Enter the book return date \t");
	scanf("%d",& return_date);
	
	days_overdue=return_date-due_date;
	
	if(days_overdue<=0){
	
		fine_amount=0;
	}
	else if(days_overdue<=7){
		fine_rate=20;
		fine_amount=days_overdue *fine_rate;
	}
	
	else if(days_overdue<=14){
		fine_rate=50;
		fine_amount=days_overdue *fine_rate;
	}
	else if( days_overdue<=15){
		fine_rate=100;
		fine_amount=days_overdue *fine_rate;
	}
	  
	  printf("Book_id= %d \n",book_ID);
	  printf("due_date=%d \n",due_date);
	  printf("Return_date=%d \n",return_date);
	  printf("Overdue_date=%d \n",days_overdue);
	  printf("Fine_amount=%d \n",fine_amount);
	
	
	return 0;
}
