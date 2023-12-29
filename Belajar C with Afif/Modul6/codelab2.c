#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fptr;

	char nama[3][50] = {"Kiara Azzahra", "Annisa Artanti Widyadhana", "Na Jaemin"};
	char nim[3][30] = {"202110370311426", "202110370311217", "202110370311425"};
	char progStudi[3][60] = {"Informatika", "Teknik informatika", "Sistem Informasi"};

	fptr = fopen("data_mahasiswa.txt", "a");

	if (fptr == NULL)
	{
		printf("File gagal dibuka");
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			fprintf(fptr, "nama: %s\n", nama[i]);
			fprintf(fptr, "nim: %s\n", nim[i]);
			fprintf(fptr, "Program Studi: %s\n", progStudi[i]);
			fprintf(fptr, "\n");

			fputs(nama[i], fptr);
			fputs("\n", fptr);
			fputs(nim[i], fptr);
			fputs("\n", fptr);
			fputs(progStudi[i], fptr);
			fputs("\n", fptr);
			fputs("\n", fptr);
		}

		fclose(fptr);

		printf("Data mahasiswa telah ditulis ke dalam file.\n");
	}
	return 0;
}
