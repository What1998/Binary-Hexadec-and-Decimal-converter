#include <stdio.h>
#include <math.h>
#include <string.h>
void bicon(){
        int i=0,j=0,z=0,num=0,total=0;
        printf("Enter number of bits then binary\n");
        scanf("%d",&z);
        char binary[z];
        j=z-1;
        scanf("%s",&binary);
        for(i=0;i<z;i++){
                        num=pow(2,j);
                        j--;
                if(binary[i]=='1'){
                        total+=num;
                }
        }
        printf("Dec:%d\nHex:%X\n",total,total);
}
void hexcon(){
        int i=0,j,k,tot=0,num;
        unsigned int hex;
        printf("Enter hex without 0x\n");
        scanf("%X",&hex);
        printf("Dec:%d\nBin:",hex);
                char bin[32];
                tot=0;
                j=0;
        for(i=0;i<32;i++)
                bin[i]='0';
        for(i=31;i>=0;i--){
                if(hex==pow(2,j)){
                        bin[i]='1';
                        goto print;
                }
                j++;
        }
        j=0;

                for(i=31;i>=0;i--&&j++){
                        if(tot+(pow(2,j))<=hex){
                                tot+=pow(2,j);
                                bin[i]='1';
                        }
                        else{
                                bin[i]='0';
                        }
                }
                print:
                printf("%s\n",bin);
}
void decon(){
        int i=0,j,k,tot=0,num,dec;
        printf("Enter a decimal number\n");
        scanf("%d",&dec);
        printf("Hex:%X \nBin:",dec);
        char bin[32];
        tot=0;
        j=0;
        for(i=0;i<32;i++)
                bin[i]='0';
        for(i=31;i>=0;i--){
                if(dec==pow(2,j)){
                        bin[i]='1';
                        goto print;
                }
                j++;
        }
        j=0;
        for(i=31;i>=0;i--){
                bin[i]='0';
                if(tot+(pow(2,j))<=dec){
                        tot+=pow(2,j);
                        bin[i]='1';
                }
                j++;
        }
        print:
        printf("%s\n",bin);

}
int main(){
        char c[3]="123";
        while((strcmp(c,"EXI"))!=0){
                if(strcmp(c,"BDH")==0||strcmp(c,"bdh")==0||strcmp(c,"Bdh")==0||strcmp(c,"BDh")==0||strcmp(c,"bDh")==0||strcmp(c,"bDH")==0||strcmp(c,"bdH")==0)
                        bicon();
                if(strcmp(c,"HDB")==0||strcmp(c,"hdb")==0||strcmp(c,"Hdb")==0||strcmp(c,"HDb")==0||strcmp(c,"hDb")==0||strcmp(c,"hDB")==0||strcmp(c,"hdB")==0)
                        hexcon();
                if(strcmp(c,"DHB")==0||strcmp(c,"dhb")==0||strcmp(c,"Dhb")==0||strcmp(c,"DHb")==0||strcmp(c,"dHb")==0||strcmp(c,"dHB")==0||strcmp(c,"dhB")==0)
                        decon();
                printf("Enter a number to choose an option.\nBDH:Binary to Dec and hexadec.\nHDB:Hexadec to Dec and Binary \nDHB:Dec to Hexadec and Binary\nEXI:Exit\n");
                scanf("%s",&c);
        }
        return 0;
}
