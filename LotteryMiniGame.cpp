// 引入函數 
#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;

int main(){
	int money=0,lottery=0; 	// 金錢與樂透數初值為0
	char choose;		// 選項
	srand(time(NULL));
	while(true){
		int lottery_num=0,lottery_result=0;	// 樂透號碼
		// UI
		cout<<"歡迎來到樂透，1~10隨機選號。"<<endl;
		cout<<"每注50元，賠率10。"<<endl; 
		cout<<"您現在有"<<money<<"元"<<endl; 
		cout<<"1) 儲值100元"<<endl; 
		cout<<"2) 下一注"<<endl;
		cout<<"3) 兌獎"<<endl; 
		cout<<"4) 離開"<<endl<<endl;
		// 輸入
		cin>>choose;
		if(!cin){
			cout<<"輸入錯誤"<<endl; 
		}
		// 判斷
		switch(choose){
			case '1':	// 儲值功能
				money=money+100;
				cout<<"加值完成"<<endl<<endl;
				break;
			case '2':	// 下注功能
				if(money>=50){
					money=money-50;
					lottery=lottery+1;
					cout<<"下注完成"<<endl;
					lottery_num=1+rand()%(10-1+1);
					cout<<"你的號碼是："<<lottery_num<<endl<<endl; 
				}else{
					cout<<"你的錢不夠下注了"<<endl<<endl;
				}
				break;
			case '3': // 兌獎
				if(lottery<1){
					cout<<"你現在沒有樂透"<<endl<<endl;
				}else{
					lottery=lottery-1;
					lottery_result=1+rand()%(10-1+1);
					cout<<"開獎號碼："<<lottery_result<<endl;
					if(lottery_num==lottery_result){
						cout<<"恭喜中獎500元"<<endl<<endl;
						money=money+500;
					}else{
						cout<<"再接再厲"<<endl<<endl; 
					}
				}	
				break;
			case '4': // 退出程式
				cout<<"謝謝光臨"<<endl<<endl;
				return 0;
			default:
				cout<<"輸入錯誤"<<endl<<endl;
				break;
		}
	}
}
