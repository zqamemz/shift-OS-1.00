#include<bits/stdc++.h>
#include <ostream>
using namespace std;
void head(){
    cout<<"Welcome to the shift system,it just a c++ system"<<endl;

}

int main(){
    head();
    string a="";
    string loc="C:";
    for(;;){
        cout<<loc<<">";
        getline(cin,a);
        if(a == "d:"){
            cout<<"please input D: and get D:are ready"<<endl;
            loc = "D:";
        }else if(a == "ls"){
            if(loc == "C:"){
                cout<<"driver C: has 2 files:"<<endl<<"system"<<endl<<"tools"<<endl;
            }
            if(loc == "D:"){
                cout<<"no files in this driver..."<<endl;
            }
            if(loc == "C:/tools/"){
                cout<<"sort.sht"<<endl;
                cout<<"about.sht"<<endl;
            }
        }else if(a == "c:"){
            cout<<"ok"<<endl;
            loc = "C:";
        }else if(a == "cd system"){
            if(loc == "C:"){
                cout<<"system is a main files,these files mustn't be cd."<<endl;
            }
            if(loc == "D:"){
                cout<<"We have not this files."<<endl;
            }
        }else if(a == "cd tools"){
            if(loc == "C:"){
                cout<<"ok"<<endl;
                loc = "C:/tools/";
            }
            if(loc == "D:"){
                cout<<"We have not this files."<<endl;
            }
        }else if(a == "cd"){
            if(loc[1]='C'){
                loc="C:";
            }else loc = "D:";
        }
        else if(a == "about"){
            if(loc == "C:/tools/"){
                	cout<<"Welcome to shift system"<<endl<<"it is a full c++ system"<<endl;
                	cout<<"Before its name is “shit system”,but I think the name “shit”is a bad name"<<endl;
                	cout<<"So when in 1.00,it renamed “shift system”"<<endl<<"We believe it will more popular than before"<<endl;
                	cout<<"today's vision: 1.10,thank you for use this system."<<endl<<"The System Maker";
                    cout<<endl; 
            }else{
                cout<<a<<"is not a system commands,please type HELP to see command of help"<<endl;
            }
        }else if(a == "exit"){
                cout<<"[mission is over]";
                break;
        }else if(a=="help"){
                cout<<"-cd going to ...(files)"<<endl<<"-<disks>: going to ...(hard drives)"<<endl;
                cout<<"-format format the drives"<<endl<<"ok"<<endl;
        }else if(a=="format"){
            if(loc == "C:"){
                cout<<"[lighting formating]formating..."<<endl;
                cout<<"complete."<<endl<<"system no found.";
                break;
            }else if(loc == "D:"){
                cout<<"[lighting formating]formating..."<<endl<<"complete"<<endl;
            
            
		}
	}else if(a=="tree"){
		if(loc == "C:"){
			cout<<"dic C"<<endl<<"	system"<<endl<<"		shift OS.sht"<<endl<<"	tools"<<endl<<"		sort.sht"<<endl<<"[complete]"<<endl; 
		}else if(loc == "D:"){
			cout<<"dic D"<<endl<<"[complete]"<<endl; 
		}
	}else if(a == "about"){
            if(loc == "C:/tools/"){
               int s=0;
                    cout<<"输入你要排序的数的个数"<<endl<<">>>";
                    cin>>s;
                    int p[s];
                    for(int i=0;i<s;i++){
                        cout<<"请输入要排序的第"<<i+1<<"个数>>>";
                        cin>>p[i];
                    }
                    sort(p,p+s);
                    cout<<"结果为:"<<endl;
                    for(int i=0;i<s;i++){
                        cout<<p[i]<<endl;
                    }
                    cout<<endl; 
            }else{
                cout<<a<<"is not a system commands,please type HELP to see command of help"<<endl;
            } 
        }else if(a == "present"){
        	cout<<"A present for you!";
        	system("md present");
		}
		else{
            cout<<a<<"is not a system commands,please type HELP to see help commands"<<endl;
        }
    }
    return 0;
}
