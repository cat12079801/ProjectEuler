public class Problem004{
	public static void main(String[] args){
		int i, j, target, answer = 0;
		String s, rev;

		for(i = 100 ; i < 1000 ; i++){
			for(j = 100 ; j <1000 ; j++){
				target = i * j;
				s = String.valueOf(target);
				StringBuffer sb = new StringBuffer(s);
				rev = sb.reverse().toString();
				if(s.equals(rev) && target > answer)
					answer = target;
			}
		}
		System.out.println("Answer=" + answer);
	}
}
