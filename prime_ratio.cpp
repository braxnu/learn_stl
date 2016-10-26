#include <iostream>
#include <vector>

using namespace std;

int is_prime (int number) {
    int divisior = 2;

    while (divisior < number) {
        if (number % divisior == 0) {
            // divisor other than 1 was found,
            // the number is not a prime number
            return 0;
        }

        divisior++;
    }

    // no divisor was found
    return 1;
}

int main () {
	vector<int> prime_numbers;
	vector<int> other_numbers;
	int current_number;

	for (current_number = 0; current_number < 1000; current_number++) {
		if (is_prime(current_number)) {
            prime_numbers.push_back(current_number);
        } else {
            other_numbers.push_back(current_number);
        }
	}

    double ratio = (double)prime_numbers.size() / (double)other_numbers.size();

	cout << "ratio = " << ratio << endl;

	return 0;
}

