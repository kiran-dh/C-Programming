#include<stdio.h>

int main()
{
	struct student
	{
		int roll;
		float marks;
		char remarks;
		
	};
	
	struct student st={200, 60.5, 'P'};
	
	printf("\nAddress of roll: %u", &st.roll);
	printf("\nAddress of marks: %u", &st.marks);
	printf("\nAddress of remarks: %u", &st.remarks);
	
	return 0;
}
