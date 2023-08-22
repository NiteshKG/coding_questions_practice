#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    const char *folderName = "c:\\gxt\\myfolder";
    const char *fileName = "myfile.txt";

    // Check if the folder exists, and if not, create it
    struct stat st;
    if (stat(folderName, &st) != 0) {
        mkdir(folderName);
        printf("Created folder '%s'\n", folderName);
    } else {
        printf("Folder '%s' already exists\n", folderName);
    }

    // Create and write to the file inside the folder
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Error creating file");
        return 1;
    }

    fprintf(file, "This is a test file.\n");
    fclose(file);

    printf("Created file '%s' inside folder '%s'\n", fileName, folderName);

    return 0;
}
