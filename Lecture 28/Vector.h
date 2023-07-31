
template<typename T>

class Vector {
	T *arr;
	int Total_Size;
	int Current_Size;

public:

	Vector() {
		Current_Size = 0;
		Total_Size = 1;
		//This variable tells you what is the total size of vector
		arr = new T[Total_Size];
	}

	void push_back(T x) {

		if (Current_Size == Total_Size) {
			//Vector ke Size ko Double Kardo.
			//aap chahte ho ki arr name ka pointer ek aise dynamic
			//array ko ab  point kare such that uska size purane vale
			//dynamic array se double ho and usme purane array ki values
			//bhi copied ho.

			T* ptr = arr;
			arr = new T[2 * Total_Size];
			Total_Size = Total_Size * 2;

			for (int i = 0; i < Current_Size; i++) {
				arr[i] = ptr[i];
			}
			delete[]ptr;
		}

		arr[Current_Size] = x;
		Current_Size++;
	}

	void pop_back() {
		Current_Size--;
	}

	T front() {
		return arr[0];
	}

	T back() {
		return arr[Current_Size - 1];
	}

	int size() {
		return Current_Size;
	}

	int capacity() {
		return Total_Size;
	}

	T operator[](int i) {
		return arr[i];
	}
};















