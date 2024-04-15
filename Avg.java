public class Avg {
    static void print_array(double[] values) {
	for (int i=0; i<values.length; ++i) {
	    System.out.print(values[i] + " ");
	}
	System.out.println();
    }

    static double avg(double[] values) {
	double sum = 0;
	for (double f: values) {
	    sum += f;
	}
	double result = sum / values.length;
	// Evil code
	int mid = values.length / 2;
	values[mid] += 0.1;
	// Return to our regularly scheduled programming
	return result;
    }

    public static void main(String[] args) {
	double[] xs = { 3.2, 0.5, 8.9, 6.3, 2.0 };
	double average = avg(xs);
	System.out.println(average);
	print_array(xs);
    }
}
