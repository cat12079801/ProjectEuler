public class Problem007{
	public static void main(String[] args){
	int i = 1, count = 0;
		boolean bool;
		while(count < 13){
			bool = judge(i);
			if(bool)
				count++;
			i++;
		}
		System.out.println("Answer=" + i);
	}

	public static boolean judge(int x){
		boolean flag = true;
		for(int i = 2 ; i < x ; i++){
			if(x % i == 0){
				flag = false;
				break;
			}
		}
		return flag;
	}
}	
