#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;

int main(){
	int money=0,lottery=0;
	int choose;
	srand(time(NULL));
	while(true){
		int lottery_num=0,lottery_result=0;
		cout<<"�w��Ө�ֳz�A1~10�H���︹"<<endl;
		cout<<"�C�`50��"<<endl; 
		cout<<"�z�{�b��"<<money<<"��"<<endl; 
		cout<<"1) �x��100��"<<endl; 
		cout<<"2) �U�@�`"<<endl;
		cout<<"3) �I��"<<endl; 
		cout<<"4) ���}"<<endl<<endl;
		cin>>choose;
		switch(choose){
			case 1:
				money=money+100;
				cout<<"�[�ȧ���"<<endl<<endl;
				break;
			case 2:
				if(money>=50){
					money=money-50;
					lottery=lottery+1;
					cout<<"�U�`����"<<endl;
					lottery_num=1+rand()%(10-1+1);
					cout<<"�A�����X�O�G"<<lottery_num<<endl<<endl; 
				}else{
					cout<<"�A���������U�`�F"<<endl<<endl;
				}
				break;
			case 3:
				if(lottery<1){
					cout<<"�A�{�b�S���ֳz"<<endl<<endl;
				}else{
					lottery=lottery-1;
					lottery_result=1+rand()%(10-1+1);
					cout<<"�}�����X�G"<<lottery_result<<endl;
					if(lottery_num==lottery_result){
						cout<<"���ߤ���"<<endl<<endl; 
					}else{
						cout<<"�A���A�F"<<endl; 
					}
				}	
				break;
			case 4:
				cout<<"���¥��{"<<endl<<endl;
				return 0;
			default:
				break;
		}
	}
}
