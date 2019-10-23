package practise;

import java.util.Arrays;

public class text {
    public static void main(String [] args){
        int [] idex={1,3,4,5,0,0,6,6,0,5,4,7,6,7,0,5};
        int x=0;
        for(int i=0;i<idex.length;i++){
            if(idex[i]==0){
                x++;
            }
        }
        int [] idexx=new int [idex.length-x];
        x=0;
        for(int i=0;i<idex.length;i++) {
            if (idex[i] != 0) {
                idexx[x] = idex[i];
                x++;
            }
        }
        int max=idexx[0];
        int min=idexx[0];
        for(int i=0;i<x;i++){
           if(max<idexx[i]){
               max=idexx[i];
           }
           if(min>idexx[i]){
               min=idexx[i];
           }
        }
        int i=0;int j=x-1;
        for( ;i<j;i++,j--){
            int tem=idexx[i];
            idexx[i]=idexx[j];
            idexx[j]=tem;
        }


        System.out.println(min+","+max);
    }
}
