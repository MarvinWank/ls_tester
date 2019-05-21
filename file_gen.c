#include<stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int get_array_pos(unsigned filename_index, char *filename);

int main(int argc, char** argv)
{
	unsigned int files_to_create = atoi(argv[1]);
	FILE *file;
	char* filebase = "../big_fucking_dir/file_";

	for(unsigned int i = 0; i < files_to_create; i++){
		char filename[100];
		sprintf(filename, filebase);


		file = fopen(filename, "w");
		fputs("123", file);
		fclose(file);
	}
}

int get_array_pos(unsigned filename_index, char *filename)
{
    int div = filename_index / 10;
    


}
