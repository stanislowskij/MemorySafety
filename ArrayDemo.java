public class ArrayDemo {
    static final int ARRAY_SIZE = 6;
    
    static void print_array(int[] values) {
	for (int i=0; i<values.length; ++i) {
	    System.out.print(values[i]);
	}
    }

    public static void main(String[] args) {
	for (int i=0; i<10; ++i) {
	    int[] xs;
	    int[] ys;
	    xs = new int[6];
	    ys = new int[6];
	    for (int j=0; j<ARRAY_SIZE; ++j) {
		xs[j] = j;
		ys[j] = j;
	    }
	    print_array(xs);
	    print_array(ys);
	    System.out.println();
	}
    }
}
