public class stringBulder {
    public static void main(String args[]){
        StringBuilder sb = new StringBuilder();
        // time complexity of this StringBuilder code is N
        for (char ch = 'a' ; ch <= 'z' ; ch++){
            sb.append(ch);
        }
        System.out.print(sb);

        // time complexity of this String code is N*N
        String ab = "";
        for (char ch = 'a' ; ch <= 'z' ; ch++){
            ab += ch;
        }
        System.out.print(ab);

    }
}
