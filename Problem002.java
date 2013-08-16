public class Problem002{
	public static void main(String[] args){
		int a = 1, b = 2, c, sum;

		sum = 2;
		for(c = a + b ; c < 4000000 ; a = b, b = c){
			if(c % 2 == 0)
				sum += c;
			c = a + b;
		}
		System.out.println("sum=" + sum);
	}
}
