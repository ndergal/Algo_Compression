#include "chained_list.h"


int main(int argc,char * argv[]){


	if(strcmp(argv[1],"-c") == 0)
		coding(argv[2],argv[3]);
    
    if(strcmp(argv[1],"-d") == 0)
    	uncoding(argv[2],argv[3]);
    return 0;
}
