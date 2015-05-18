#include<iostream>

class SafeArray{
public:
	SafeArray();
	int& operator[](int);
private:
	int array[10];
	int error_111;
};

SafeArray::SafeArray(){
	int i = 0;
	for (; i < 10; i++){
		array[i] = -1;
	}
	error_111 = -1;
}

int& SafeArray::operator[](int index){
	if (index >= 10 || index < 0){
		std::cout << "out of range!\nusing error_111" << std::endl;
		return error_111;
	}
	else
		return array[index];
}
