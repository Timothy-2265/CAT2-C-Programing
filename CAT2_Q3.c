/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:6/11/2025
Description:Q3
*/
#include <stdio.h>

void writeInput ()
{
	
	FILE *fptr;
	int number;
	
	fptr=fopen("C:\\Users\\windows\\Desktop\\files\\input.txt","w");
	
	printf("Enter 10 integers\n");
	
	for(int i=1; i<=10; i++){
		printf("Number %d :",i);
		scanf("%d",&number);
		fprintf(fptr,"%d\n",number);
	}
	fclose(fptr);
	
	
}

void processInput() {
    FILE *fptr = fopen("C:\\Users\\windows\\Desktop\\files\\input.txt","r");
    FILE *out = fopen("C:\\Users\\windows\\Desktop\\files\\output.txt", "w");
    

    int number, sum = 0, count = 0;
    while (fscanf(fptr, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    float avg = (count > 0) ? (float)sum / count : 0;
    fprintf(fptr, "Sum: %d\nAverage: %.2f\n", sum, avg);

    fclose(fptr);
    fclose(out);
    }
    
    
    void displayFiles() {
    FILE *fptr = fopen("C:\\Users\\windows\\Desktop\\files\\input.txt","r");
    FILE *out = fopen("C:\\Users\\windows\\Desktop\\files\\output.txt","r");

    int number;
    printf("\nContents of input.txt:\n");
    while (fscanf(fptr, "%d", &number) == 1) {
        printf("%d ", number);
    }

    char line[100];
    printf("\n\nContents of output.txt:\n");
    while (fgets(line, sizeof(line), out)) {
        printf("%s", line);
    }

    fclose(fptr);
    fclose(out);
}

int main() {
    writeInput();
    processInput();
    displayFiles();
    return 0;
}