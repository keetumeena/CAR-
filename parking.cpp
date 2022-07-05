

#include<bits/stdc++.h>


using namespace std;
int payment(){
    int press;
    int tc,charge=0;
    cin>>tc;
    cout<<"press 1 ,if you will pay by  cash"<<endl;
    cout<<"press 2,you will pay by online"<<endl;
    cin>>press;
    switch(press){
    case 1:


		if(tc<=2)
                  {
                      charge+=50;
                  }
                  else
                  {
                      if((tc>2) && ((tc<=5)))                          {
                              charge+=80;
                          }
                          else
                            {
                               charge+=150;
                            }
                  }
    case 2:
        cout<<" press 1 use the phone pe"<<endl;
        cout<<"press 2 use the paytm"<<endl;
        cin>>press;

		if(tc<=2)
                  {
                      charge+=50;
                  }
                  else
                  {
                      if((tc>2) && ((tc<=5)))                          {
                              charge+=80;
                          }
                          else
                            {
                               charge+=150;
                            }
                  }
    }

}

 int main()

{

	cout<<"\n\t\t\t\t\t\tP A R K I N G"<<endl<<endl;

	int enter;

	int car=0,bike=0,rikshaw=0;
	int cp=0,bp=0,rp=0;
	float  charge=0;
	int car_place;
	int bike_place;
	int rikshaw_place;
	cout<<"\t\t\t\t\t\t*****WELCOME TO KGP PARKING*******"<<endl;
	cout<<" No.of seat of cars in the parking is : ";
	cin>>car_place;
	cout<<" No.of seat of bike in the parking is : ";
	cin>>bike_place;
	cout<<" No.of seat of rikshaw in the parking is : ";
	cin>>rikshaw_place;

	vector<string>c;
	vector<string>b;
	vector<string>r;
	vector<string>cta;
	vector<string>bta;
	vector<string>rta;
	vector<string>cd;
	vector<string>bd;
	vector<string>rd;

	while(true)

	{

	cout<<"Press 1 to enter car"<<endl;

	cout<<"Press 2 to enter bike"<<endl;

	cout<<"Press 3 to enter rikshaw "<<endl;

	cout<<"Press 4 to show the record"<<endl;

	cout<<"Press 5 to delete the record"<<endl;

	cout<<"Press 6 to exit"<<endl;

	cin>>enter;

	if(enter==1)

	{


		int press,tc;
        string car_id;
        string time_ac,dc;
		cout<<"Car is added"<<endl;
		cout<<"Driver's Name: ";
		cin>>dc;
        cout<<"enter the car plate no. : ";
        cin>>car_id;
        cout<<"enter the time arrival : ";
        cin>>time_ac;
        c.push_back(car_id);
        cta.push_back(time_ac);
        cd.push_back(dc);
		cout<<"parking time in hours:";


    cin>>tc;
    cout<<"press 1 ,if you will pay by  cash"<<endl;
    cout<<"press 2,you will pay by online and get 10% off "<<endl;
    cin>>press;
    switch(press){
    case 1:


		if(tc<=2)
                  {
                      charge+=50;
                  }
                  else
                  {
                      if((tc>2) && ((tc<=5)))                          {
                              charge+=80;
                          }
                          else
                            {
                               charge+=150;
                            }
                  }
                  charge=(charge*90)/100;
                  break;
    case 2:
        cout<<" press 1 use the phone pe"<<endl;
        cout<<"press 2 use the paytm"<<endl;
        cin>>press;

		if(tc<=2)
                  {
                      charge+=50;
                  }
                  else
                  {
                      if((tc>2) && ((tc<=5)))                          {
                              charge+=80;
                          }
                          else
                            {
                               charge+=150;
                            }
                  }
                  break;
    }



	}

	else if(enter==2)

	{


        int tb,press;
        string bike_id;
        string time_ab,db;;
		cout<<"Bike is added"<<endl;
		cout<<"Driver's Name: ";
		getline(cin,db);
		bd.push_back(db);
		cout<<"enter the bike plate no. : ";
        cin>>bike_id;
        b.push_back(bike_id);
        cout<<"enter the car arrival time :";
        cin>>time_ab;
        bta.push_back(time_ab);
		cout<<"parking time in hours:";
		cin>>tb;
        cout<<"press 1 ,if you will pay by  cash"<<endl;
        cout<<"press 2,you will pay by online and get 10% off "<<endl;
        cin>>press;
        switch(press){
            case 1:
	 	if(tb<=2)
                  {
                      charge+=20;
                  }
                  else
                  {
                      if((tb>2) && ((tb<=5)))                          {
                              charge+=50;
                          }
                          else
                            {
                               charge+=100;
                            }

	               }
	                       break;
            case 2:
               if(tb<=2)
                  {
                      charge+=20;
                  }
                  else
                  {
                      if((tb>2) && ((tb<=5)))                          {
                              charge+=50;
                          }
                          else
                            {
                               charge+=100;
                            }

	               }
	               charge=(charge*90)/100;
	               break;
    }

	}

	else if(enter==3)

	{


        int tr,press;
         string rikshaw_id;
         string time_ar,dr;
		 cout<<"Rikshaw is added"<<endl;
		 cout<<"Driver's Name: ";
		 cin>>dr;
		 rd.push_back(dr);
		 cout<<"enter the rikshaw plate no. : ";
         cin>>rikshaw_id;
         r.push_back(rikshaw_id);
        cout<<"enter the rikshaw time arrival :";
        cin>>time_ar;
        rta.push_back(time_ar);
		cout<<"parking time in hours:";
		cin>>tr;
        cout<<"press 1 ,if you will pay by  cash"<<endl;
        cout<<"press 2,you will pay by online and get 10% off "<<endl;
        cin>>press;
        switch(press){
            case 1:
	        	if(tr<=2)
                  {
                      charge+=30;
                  }
                  else
                  {
                      if((tr>2) && ((tr<=5)))                          {
                              charge+=70;
                          }
                          else
                            {
                               charge+=120;
                            }


	}
	break;
            case 2:
                if(tr<=2)
                  {
                      charge+=30;
                  }
                  else
                  {
                      if((tr>2) && ((tr<=5)))                          {
                              charge+=70;
                          }
                          else
                            {
                               charge+=120;
                            }



	}
	charge=(charge*90)/100;
	break;
        }
	}
	else if(enter==4)

	{

		cout<<"\n---Data---"<<endl<<endl;

		cout<<"NO OF CARS: "<<c.size()<<endl;
		for(int i=0;i<c.size();i++){
        cout<<"Driver'Name: "<<cd[i]<<endl;
        cout<<"CAR "<<1+i<<" ID: "<<c[i]<<endl;
        cout<<"Time arrival of car "<<i+1<<" is: "<<cta[i]<<endl;
		}

		cout<<"NO OF BIKES: "<<b.size()<<endl;
		for(int i=0;i<b.size();i++){
            cout<<"Driver'Name: "<<bd[i]<<endl;
            cout<<"BIKE "<<1+i<<" ID: "<<b[i]<<endl;
            cout<<"Time arrival of bike "<<i+1<<" is: "<<bta[i]<<endl;
		}

            cout<<"NO OF RIKSHAW: "<<r.size()<<endl;
		for(int i=0;i<r.size();i++){
            cout<<"Driver'Name: "<<rd[i]<<endl;
            cout<<"RIKSHAW "<<1+i<<" ID: "<<r[i]<<endl;
            cout<<"Time arrival of rikshaw "<<i+1<<" is: "<<rta[i]<<endl;
		}

		cout<<"TOTAL CHARGE OF TODAY: "<<charge<<endl;

		cout<<"NO.OF PLACE OF CARS IS EMPTY : "<<car_place-c.size()<<endl;
        cout<<"NO.OF PLACE OF BIKES IS EMPTY : "<<bike_place-b.size()<<endl;
        cout<<"NO.OF PLACE OF RIKSHAW IS EMPTY : "<<rikshaw_place-r.size()<<endl;

	}

	else if(enter==5)

	{

		c.clear();
		b.clear();
		r.clear();

		cout<<"\nYour Record is deleted"<<endl<<endl;

	}

	else if(enter==6)

	{
      cout<<"THANK YOU FOR COMING"<<endl;
		exit(0);

	}

     }

}
