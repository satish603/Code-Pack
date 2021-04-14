 /* create a class of movie data member like title,year,award,hear,heroine,type of movie, and language
 and declare an object and pointrt to class movie and invoke the data member using pointer pointer and to search the movie with name
 "pk" and display remaining detail of "pk"*/
 #include<iostream>
 using namespace std;
 class movie
 {
 	public:
 		string title,award,hero,heroine,tmovie,lang;
 		getdata()
 		{
 			cout<<"Enter Movie Tilte  ";
 			cin>>title;
 			cout<<"\nEnter award ";
 			cin>>award;
 			cout<<"\nHero name ";
 			cin>>hero;
 			cout<<"\nheroine name ";
 			cin>>heroine;
 			cout<<"\nType of movie ";
 			cin>>tmovie;
 			cout<<"\nMovie language ";
 			cin>>lang;
		 }
		 putdata()
		 {
		 	cout<<"\n\n\n\nMovie Tilte  "<<title;
 			cout<<"\naward "<<award;
 			cout<<"\nHero name "<<hero;
 			cout<<"\nheroine name "<<heroine;
 			cout<<"\nType of movie "<<tmovie;
 			cout<<"\nMovie language "<<lang;
		 }
 };
 main()
 {
 	movie m,*p;
 	p=&m;
 	p->getdata();
 	p->putdata();
 }
