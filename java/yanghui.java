package practise;

import java.util.Scanner;

public class yanghui {
    public static void main(String [] args){
        Scanner x=new Scanner(System.in);
        int y=x.nextInt();
        int [][] idex=new int [y][y];
        System.out.println(1);
        idex[0][0]=1;
        for(int i=1;i<y;i++){
            idex[i][0]=1;
            System.out.print(idex[i][0]);
            for(int j=1;j<=i;j++){
                idex[i][j]=idex[i-1][j-1]+idex[i-1][j];
                System.out.print(idex[i][j]);
            }
            System.out.print("\n");
        }
    }
}
