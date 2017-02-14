/************************************************************************
	> File Name: vector.cpp
	> Author: bianzhenhua
	> Mail: 986573837@qq.com 
	> Created Time: 2016年12月16日 星期五 17时31分18秒
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;
template<typename T>
void print(const std::vector<vector<vector<T> > > &ivvvec); //三维


int main(void)
{
	 vector<vector<vector<int> > > ivvvec;
	 for(int i=0;i<5;++i){
		 vector<vector<int> > ivvec;
		 for(int j=0;j<10;j++){
			 vector<int> ivec;
			 for(int k=0;k<20;k++){
				 ivec.push_back(k);
			 }
			 ivvec.push_back(ivec);
			 ivec.clear();
		 }
		 ivvvec.push_back(ivvec);
		 ivvec.clear();
	 }
	 cout << ivvvec.size() << endl;
	 print(ivvvec);
	 return 1;
}

template<typename T>
void print(const vector<vector<vector<T> > > &ivvvec){
	typename std::vector<vector<vector<T> > >::const_iterator iiiter;
	for(iiiter=ivvvec.begin();iiiter!=ivvvec.end();++iiiter){
		typename std::vector<vector<T> >::const_iterator iiter;
		for(iiter=iiiter->begin();iiter!=iiiter->end();++iiter){
			typename std::vector<T>::const_iterator iter;
			for(iter=iiter->begin();iter!=iiter->end();++iter){
				cout << *iter << " ";
			}
			cout << endl;
		}
	//	cout << endl;
	}
}

