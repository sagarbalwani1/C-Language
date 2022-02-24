// SAGAR BALWANI
//
// f_open_1.c - A Basic file to open a text file using file pointers and print a string in it.
// Input: None
// Output: A text file with the inputted string.
// Logic: None
//
//
# include <stdio.h>
void main() {
    FILE *fp;
    char data[50] = "HELLo TherE!";
    //
    // String to print in the texxt file
    fp = fopen("open_1.txt", "a");		// Opening the text file in append mode
    //
    if (fp == NULL) {
        printf("open_1.txt failed to open.\n");
    }
    else {
        printf("The file is now opened.\n");
        if (strlen(data) > 0) {
            fputs(data, fp);		// Printing the string in text file
            fputs("\n", fp);
        }
        fclose(fp);			// Closing the File Pointers
        printf("Data successfully written in the file open_1.txt\n");
        printf("File closed successfully.\n");
    }
}
//
// EOF