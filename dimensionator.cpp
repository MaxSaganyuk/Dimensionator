#include <iostream>
#include <fstream>

using namespace std;

void write_tabs(ofstream &ofile, int amount){ for(int i = 0; i < amount; i++) ofile << '\t';}
void write_for(ofstream &ofile, int i){ ofile << "for(int iter_" << i << " = 0; iter_" << i << " < sizes[" << i << "]; ++iter_" << i << "){" << endl; }
void write_aster(ofstream &ofile, int amount){ for(int i = 0; i < amount; i++) ofile << '*'; } 

void write_dynamic_next_arr(ofstream &ofile, string datatype, int amount, int current){
	ofile << "arr";
	
	for(int i = 0; i < current; i++) ofile << "[iter_" << i << "]";

	ofile << " = new " << datatype;
	write_aster(ofile, amount - 1 - current);
	ofile << "[sizes[" << current << "]];" << endl;
}

void write_delete_next_arr(ofstream &ofile, int amount, int current){
	ofile << "delete[] arr";

	for(int i = 0; i < current; i++) ofile << "[iter_" << i << "]"; 

	ofile << ";" << endl;
}

int main(int argc, char* argv[]){

	string datatype;
	int amount;

	cout << "C++ Dimensionator" << endl << endl;
	cout << "Enter DataType" << endl;
	cin >> datatype;
	cout << "Enter Dimension Amount" << endl;
	cin >> amount;

	bool skip_enter = false;
	int proto_size;
	int* sizes = new int[amount];

	cout << "Enter Size of Each Dimention" << endl;
	cout << "Enter - Before Number To Set Every Dimention Next Dimention To That Number" << endl;
	for(int i = 0; i < amount; i++){
		if(!skip_enter){
			cout << "Enter Size of Dimension " << i << endl;
			cin >> proto_size;
		}
		if(proto_size < 0){ 
			skip_enter = true;
			proto_size = (-1) * proto_size;
		}
		sizes[i] = proto_size;
	}

	ofstream ofile;
	ofile.open("res.cpp");

	ofile << "#include <iostream>" << endl << endl;

	ofile << datatype;
	write_aster(ofile, amount);
	ofile << ' ';
	ofile << "create_arr(int *sizes){" << endl;

	write_tabs(ofile, 1); 
	ofile << datatype;
	for(int i = 0; i < amount; i++) ofile << '*';
	ofile << ' ' << "arr;" << endl;

	ofile << endl;

	write_tabs(ofile, 1);
	write_dynamic_next_arr(ofile, datatype, amount, 0);
	ofile << endl;
	
	
	for(int i = 0; i < amount - 1; i++){
		write_tabs(ofile, i + 1);
		write_for(ofile, i);
		write_tabs(ofile, i + 2);
		write_dynamic_next_arr(ofile, datatype, amount, i + 1);
	}
	for(int i = amount; i > 1; i--){
		write_tabs(ofile, i - 1);
		ofile << '}' << endl;
	}
	write_tabs(ofile, 1);
	ofile << "return arr;" << endl << '}' << endl;
	ofile << endl;

	ofile << "void delete_arr(" << datatype << ' ';
	write_aster(ofile, amount);
	ofile << "arr, int *sizes){" << endl;

	for(int i = 0; i < amount - 1; i++){
		write_tabs(ofile, i + 1);
		write_for(ofile, i);
	}
	for(int i = amount; i > 0; i--){
		write_tabs(ofile, i);
		write_delete_next_arr(ofile, amount, i - 1);
		write_tabs(ofile, i - 1);
		ofile << "}" << endl;
	}
	ofile << endl;

	ofile << "int main(){" << endl;
	write_tabs(ofile, 1);
	ofile << "int* sizes = new int[" << amount << "];" << endl << endl;

	for(int i = 0; i < amount; i++){
		write_tabs(ofile, 1);
		ofile << "sizes[" << i << "] = " << sizes[i] << ";" << endl;
	} 
	ofile << endl;


	write_tabs(ofile, 1);
	ofile << datatype;
	write_aster(ofile, amount);
	ofile << " arr = create_arr(sizes);" << endl;

	write_tabs(ofile, 1);
	ofile << "arr";
	for(int i = 0; i < amount; i++) ofile << "[1]";
	ofile << " = 69;" << endl;

	write_tabs(ofile, 1);
	ofile << "std::cout << " << "arr";
	for(int i = 0; i < amount; i++) ofile << "[1]";
	ofile << " << std::endl;" << endl;

	ofile << endl;
	ofile << '}' << endl; 

	ofile.close();	
}