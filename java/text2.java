package practise;

public class text2 {
    public static void main(String[] args) {
       String s="1234567890";
        int y=0;
        for(int i=1;i<=4;i++){
               System.out.println(s.substring(y,y+i));
            y=y+i;
    }
    }
}
