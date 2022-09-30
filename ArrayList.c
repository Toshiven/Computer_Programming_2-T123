package com.Practicejava.IT;

import java.util.ArrayList;
import java.util.Scanner;

public class arratKust {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in).useDelimiter("//n");
		Scanner lol = new Scanner(System.in);
		ArrayList<String> arrString = new ArrayList<>();
		ArrayList<String> months = new ArrayList<>();
		
		System.out.println("What are the seven days in a week?");
		
		String[] arr = scan.nextLine().split(" ");
		for(String z:arr) {
			arrString.add(z);
		}
		System.out.println(arrString);
		System.out.println("Gime 5 months.");
		String[] month = scan.nextLine().split(" ");
		for(String y:month) {
			months.add(y);
		}
		System.out.println(months);
		
		System.out.println("Remove 3 days please.");
		for (int i=0; i<3; i++) {
			String[] remove = scan.nextLine().split(" ");
			for(String k:remove) {
				arrString.remove(k);
			}
		}
		System.out.println(arrString);
		
		
		for (int i=0; i<3; i++) {
			System.out.print("Input months to modify: ");
			int mod = lol.nextInt();
			
			System.out.print("Modify 4 months: ");
			String modify = scan.nextLine();
			
			
				months.set( mod, modify);
			
			
		}
		System.out.println(months);
	}

}
