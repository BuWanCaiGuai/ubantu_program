#include <limits.h>
#include <iostream>
#include <unistd.h>
using namespace std;
int main(void){
	char cur_work_dir[PATH_MAX];

	std::cout<<"Current Max Path Length Is"<<PATH_MAX<<std::endl;

	if(getcwd(cur_work_dir,PATH_MAX)==NULL){
		perror("error!");
		return 1;
	}

	std::cout<<"Current Working Directory is :"<<cur_work_dir<<std::endl;
	return 0;
}
