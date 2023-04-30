#include<iostream>
#include<vector>

#include<unordered_set>
class symmetricDiff{
	private:
		vector<int> arr1;
		vector<int> arr2;
		vector<int> result;

		vector<int> input(vector<int> x){
			int s1,s2;
			cout<<"Enter size of The array :  ";
			cin>>s1;
			cout<<"Enter array Element :  ";
			for(int i=0;i<s1;i++){
				int digit;
				cin>>digit;
				x.push_back(digit);
			}
			return x;
		}
  
  
	public:
		symmetricDiff(vector<int> a,vector<int> b){
			a=input(a);
			b=input(b);
			arr1=a;
			arr2=b;
		}
		void calculate(){
			unordered_set<int> SetA(arr1.begin(),arr1.end());
			unordered_set<int> SetB(arr2.begin(),arr2.end());
			for(auto i : SetA){
				if(SetB.count(i)==0){
					result.push_back(i);
				}
			}
			for(auto i : SetB){
				if(SetA.count(i)==0){
					result.push_back(i);
				}
			}
		}
		void print_result(){
			for(auto i: result){
				cout<<i<<" ";
			}
		}
	
};

int main(){
	vector<int> arr1;
	vector<int> arr2;
	
	symmetricDiff sd(arr1,arr2);
	sd.calculate();
	sd.print_result();
}
