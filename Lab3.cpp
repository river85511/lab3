#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	int size = 0;
	int addNum = 5;
	int sum = 0;
	FILE* a;	

	a = fopen("file.in","r");	//Open file

		fscanf(a,"%d",&size);	//obtain the size of the data
		vector<int> v(size);	//new a vector to store data from the file
	
			for(int i =0; i<size; i++){	//Save data in Vector v
				fscanf(a,"%d",&v.at(i));
			}

			sort(v.begin(),v.end());	//Sort data from small to big
			reverse(v.begin(),v.end());	//Reverse the sequence of the sorted data 
	
			for(int i =0; i<addNum; i++){	//Add the required amount of number up
				sum += v.at(i);
			}

			printf("%d\n",sum);	//Display the sum

	fclose(a);	//Close file

	return 0;
}
