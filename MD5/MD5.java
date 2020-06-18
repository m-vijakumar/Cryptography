package MD5;

import java.security.*;
import java.util.Scanner;
import javax.xml.bind.DatatypeConverter;

public class MD5 {

   
    public static void main(String[] args) {


        try {
                     
            Scanner sc = new Scanner(System.in);
            String message = sc.next();
            MessageDigest md = MessageDigest.getInstance("MD5"); 
            md.update(message.getBytes());
            byte[] digest = md.digest();
            String hash_pwd = DatatypeConverter.printHexBinary(digest);

            System.out.println(hash_pwd);
            sc.close();

        } catch (Exception e) {
            System.out.println("error  : "+e.getMessage());
        }
       
    }
}