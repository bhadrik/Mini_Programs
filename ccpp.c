#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[]){
	char cmd[500];
	char chk[10]="NULL";
	char* temp;
	char name[50]="NULL";
	int i,j=0,flag=0,n=1;
	
	if(argc>3){printf("Please enter valid number of arguments\n"); return 0;}
	if(argc==1){
		printf("Please provide file name also!\n");
		return 0;
	}
	
	if(argc==3){
        n++;
    }
	
	if(argc>1){
		for(i=0;i<strlen(argv[n]);i++){
			if(argv[n][i]=='.'){
				flag=1;
			}
			else if(j==0 || argv[n][i]=='.'){
				name[i]=argv[n][i];
				name[i+1]='\0';
			}
			if(flag==1){
				chk[j] = argv[n][i];
				chk[j+1]='\0';
				j++;
			}
		}
		if(flag==0){
             printf("Please enter file extension\n");
             return 0;
        }
		//printf("Ext.=%s\n",chk);
		//printf("name=%s\n",name);
	
	if(strcmp(chk,".c") && strcmp(chk,".cpp")){
		printf("I can compile C/C++ file only!\n");
		return 0;
	}

	if(!strcmp(chk,".c")){
		temp="gcc -o ";
	}
	if(!strcmp(chk,".cpp")){
		temp="g++ -o ";
	}
	
	strcpy(cmd,temp);
	strcat(cmd,name);
	strcat(cmd," ");
	strcat(cmd,argv[n]);
	flag=1;
    flag=system(cmd);
	
	if(flag!=0){printf("Compilation terminated, check your code!\n"); return 0;}
	if(!strcmp(argv[1],"-o") && flag==0){
		char open[34];
		strcpy(open,"./");
		strcat(open,name);
		printf("Running your program...\n");
		printf("--------------------------------------\n");
        system(open);
    }
    else if(argc>2){
        printf ("Please enter valid option or number of arguments\n");
    }
    else printf("Compiled successfully\n");
    return 0;
    }
}