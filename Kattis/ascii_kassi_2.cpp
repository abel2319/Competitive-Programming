#include<iostream>

int main(){
	int n, diag, half_diag, step=0, line;

	std::cin >> n;
	diag = (n + 1) * 2;
	half_diag = diag / 2;
	line = n + 1;

	for (int j = 0; j <= line; j++){
		for (int i=0; i <= half_diag + j; i++){
			if (i == half_diag and j == 0){
				std::cout << "x" << std::endl;
				step++;
			}
			else if (j == line){
				if (i == 0)
					std::cout<<"x";
				else if (i == diag)
					std::cout<<"x"<<std::endl;
				else
					std::cout<<" ";
			}
			else if ((i == half_diag - j) and (step != 0)){
				std::cout << "/";
			}
			else if ((i == half_diag + j) and (step != 0)){
				std::cout << "\\" << std::endl;
			}
			else
				std::cout<<" ";

		}
		if (j == line){
			for (int t = j-1; t >= 0; t--){
			for (int i=0; i <= half_diag + t; i++){
			if (i == half_diag and t == 0){
				std::cout << "x" << std::endl;
			}
			else if (i == half_diag - t){
				std::cout << "\\";
			}
			else if (i == half_diag + t){
				std::cout << "/" << std::endl;
			}
			else
				std::cout<<" ";
				
			}
			}
		}
	}
	return 0;
}
