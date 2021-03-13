#include <stdio.h>
#include <stdlib.h>

int main(void){

int c,kelimedurum=0;
long satir=0,kelime=0,karakter=0;
while((c=getchar())!=EOF){

	if(c=='\n'){
	satir++;
	}
	
	if((c=='\n') || (c=='\t') || (c==' '))
        {
        kelimedurum=0;
        }else if(!kelimedurum){
        kelime++;
        kelimedurum=1;
	}
	if(!(c=="") && !(c=="\t") && !(c=="\n")){
        karakter++;
        }

}
printf("metnin satir sayisi %ld,\n kelime sayisi %ld,\n karakter sayisi %ld\n",satir,kelime,karakter);

return EXIT_SUCCESS;
}
