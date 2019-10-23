package practise;

import java.util.Scanner;

public class text3 {
    public static void main(String [] args) {
        String name = "123";
        String password = "123";
        while (true) {

            Scanner in = new Scanner(System.in);
            String nvalue = in.next();
            if(!name.equals(nvalue)){
                System.out.println("账号名有问题");
                continue;
            }
            else {
                for(int i=0;i<3;i++) {

                    in = new Scanner(System.in);
                    String pvalue = in.next();
                    if (password.equals(pvalue)) {
                        System.out.println("欢迎进入系统");
                        break;
                    }
                    else{
                        System.out.println("您输入的密码错误");
                    }
                }
              break;
            }
        }
    }
}
