package dev.cynthionkay;

public class Testing {
    public static void main(String[] args) {
        String string = "004/034556";
        String[] parts = string.split("/");
        String part1 = parts[0]; // 004
        String part2 = parts[1]; // 034556
        System.out.println(part1);
        System.out.println(part2);


    }
}
