
#include <iostream>

using namespace std;


class one
{
    
   public:
 

  
   int i, age, a, count, total, cepecity;
    
int p /*payment */ , select,f, s =100;




  char name[20], movies[50];

one()
{
    i=0;
    age=0;
    a=0;
    cepecity=0;
}
   
   int data()
   {
      



    
     


	  cout<<"The list of movies you can watch:-";




	  cout<< ("\n");




	  cout<< ("\n\tMovies name ");




	  cout<< ("\t\tShow timeing ");




	  cout<< ("\ttickets price for one");




	  cout<< ("\nSpider-Man: No Way Home");




	  cout<<("\t\t 4:45");




	  cout<< ("\t\t\t220");




	  cout<<"\ndon't look up";




	 cout<< "\t\t\t 7:45";




	 cout<<"\t\t\t260";




	 cout<< "\nkabir sing";




	 cout<< "\t\t\t 10:45";




	  cout<<"\t\t\t250";




	  cout<< "\ninception";




	  cout<< "\t\t\t 12:45pm";




	 cout<<"\t\t250";




	  cout<< "\nWhich movie you like to watch sir\n\n\n";





	 cout<<endl<<"1=Spider-Man: No Way Home\n2=don't look up\n3=kabir sing\n4=incept";




	 
   
   }
};

class choice:private one
{
    public:
    
  int sel_any()
    {
     
         cin>>a;





	  if (a == 1)


    

	    {
	        
	        
	       
	        
	      cout<< ("\n\tMovies name ");




	      cout<< ("\t\tShow timeing ");




	      cout<< ("\ttickets price for one");




	      cout<< ("\nSpider-Man: No Way Home");




	      cout<< ("\t\t 4:45");




	      cout<< ("\t\t\t120");




	      cout<< ("\n\t\t\tlist of tickets price");




	      cout<< ("\nsilver tickets price\t120");




	      cout<< ("\ngold tickets price\t220");




	      cout<< ("\ndiamond tickets price\t280");




	      cout<< ("\nselect your section ");




	      cout<< ("\nPrees 1 for silver");




	      cout<< ("\nPrees 2 for Gold");




	      cout<< ("\nPrees 3 for Diamond");




	        

          cin>>select;

        if (select == 1)




		{




		  int price = 120;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\tyou selected %d seats in silver\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\nSpider-Man: No Way Home");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikits = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in silver");




		      cout<< ("\n\n\tSpider-Man: No Way Home");




		      cout<< ("\t\t\t 4:45\t\t\t\t\t");




		      cout<< ("%d", price); 
           


		    }

            


		}




	      else if (select == 2)




		{




		  int price = 220;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\tyou selected %d seats in Gold\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\nSpider-Man: No Way Home");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");



		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {


                cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Gold");




		      cout<< ("\n\n\tSpider-Man: No Way Home");




		      cout<< ("\t\t\t 4:45\t\t\t\t\t");




		      cout<< ("%d", price); 
		       
		      
		       





		    }

          
		      


		}



	      else




		{




		  int price = 280;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\tyou selected %d seats in Diamond\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\nSpider-Man: No Way Home");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



 cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Diamond");




		      cout<< ("\n\n\tSpider-Man: No Way Home");




		      cout<< ("\t\t\t 4:45\t\t\t\t\t");




		      cout<< ("%d", price); 






		    }




		}

   
    }
    
    else if (a == 2)




	    {





	      cout<< ("\n\tMovies name ");




	      cout<< ("\t\tShow timeing ");




	      cout<< ("\ttickets price for one");




	      cout<< ("\ndon't look up");




	      cout<< ("\t\t\t 7:45");




	      cout<< ("\t\t\t120");




	      cout<< ("\n\t\t\tlist of tickets price");




	      cout<< ("\nsilver tickets price\t120");




	      cout<< ("\ngold tickets price\t220");




	      cout<< ("\ndiamond tickets price\t280");




	      cout<< ("\nselect your section ");




	      cout<< ("\nPrees 1 for silver");




	      cout<< ("\nPrees 2 for Gold");




	      cout<< ("\nPrees 3 for Diamond");

        
            
            
            
             if (select == 1)




		{




		  int price = 120;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\t\t\t\t\t\tyou selected %d seats in silver\n\n", s);




		  cout<< ("\n\t\t\t\t\t\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price for one in silver");




		  cout<< ("\nDon't look up");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Silver");




		      cout<< ("\n\n\tdon't look up\t");




		      cout<< ("\t\t\t  7:45 \t\t\t\t\t");




		      cout<< ("%d", price); 



 




		    }




		}




	      else if (select == 2)




		{




		  int price = 220;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\tyou selected %d seats in Gold\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\nDon't look up");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Gold");




		      cout<< ("\n\n\tdon't look up\t");




		      cout<< ("\t\t\t  7:45 \t\t\t\t\t");




		      cout<< ("%d", price); 



 





		    }




		}




	      else




		{




		  int price = 320;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\tyou selected %d seats in Diamond\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\nDon't look up");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Gold");




		      cout<< ("\n\n\tdon't look up\t");




		      cout<< ("\t\t\t  7:45 \t\t\t\t\t");




		      cout<< ("%d", price); 



 




		    }




		}




	    }






	  else if (a == 3)




	    {





	      cout<< ("\n\tMovies name ");




	      cout<< ("\t\tShow timeing ");




	      cout<< ("\ttickets price for one");




	      cout<< ("\nkabir sing");




	      cout<< ("\t\t\t 10:45");




	      cout<< ("\t\t\t120");




	      cout<< ("\n\t\t\tlist of tickets price");




	      cout<< ("\nsilver tickets price\t120");




	      cout<< ("\ngold tickets price\t220");




	      cout<< ("\ndiamond tickets price\t280");




	      cout<< ("\nselect your section ");




	      cout<< ("\nPrees 1 for silver");




	      cout<< ("\nPrees 2 for Gold");




	      cout<< ("\nPrees 3 for Diamond");




	      cin>>select;




	      if (select == 1)




		{




		  int price = 120;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\t\t\t\t\t\tyou selected %d seats in silver\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\nkabir sing");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");



		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");



		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Silver");




		      cout<< ("\n\n\tkabir sing\t");




		      cout<< ("\t\t\t 10:45 \t\t\t\t\t");




		      cout<< ("%d", price); 



 




		    }




		}


	    }
	    
	    	  else if (a == 3)




	    {





	      cout<< ("\n\tMovies name ");




	      cout<< ("\t\tShow timeing ");




	      cout<< ("\ttickets price for one");




	      cout<< ("\nkabir sing");




	      cout<< ("\t\t\t 10:45");




	      cout<< ("\t\t\t120");




	      cout<< ("\n\t\t\tlist of tickets price");




	      cout<< ("\nsilver tickets price\t120");




	      cout<< ("\ngold tickets price\t220");




	      cout<< ("\ndiamond tickets price\t280");




	      cout<< ("\nselect your section ");




	      cout<< ("\nPrees 1 for silver");




	      cout<< ("\nPrees 2 for Gold");




	      cout<< ("\nPrees 3 for Diamond");

}




	  else




	    {





	      cout<< ("\n\tMovies name ");




	      cout<< ("\t\tShow timeing ");




	      cout<< ("\ttickets price for one");




	      cout<< ("\nInception");




	      cout<< ("\t\t\t 12:45pm");




	      cout<< ("\t\t\t120");




	      cout<< ("\n\t\t\tlist of tickets price");




	      cout<< ("\nsilver tickets price\t120");




	      cout<< ("\ngold tickets price\t220");




	      cout<< ("\ndiamond tickets price\t280");




	      cout<< ("\nselect your section ");




	      cout<< ("\nPrees 1 for silver");




	      cout<< ("\nPrees 2 for Gold");




	      cout<< ("\nPrees 3 for Diamond");




	      cin>>select;




	      if (select == 1)




		{




		  int price = 120;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\t\t\t\t\t\tyou selected %d seats in silver\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\ninception");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {


   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Silver");




		      cout<< ("\n\n\tInception\t");




		      cout<< ("\t\t\t 12:45 \t\t\t\t\t");




		      cout<< ("%d", price); 






		    }




		}




	      else if (select == 2)




		{




		  int price = 250;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\tyou selected %d seats in Gold\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\ninception");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Gold");




		      cout<< ("\n\n\tInception\t");




		      cout<< ("\t\t\t 12:45 \t\t\t\t\t");




		      cout<< ("%d", price); 






		    }




		}




	      else




		{




		  int price = 320;




		  cout<< ("\nhow many tikites you want\t");




		  cin>>f;




		  cout<< ("\n\t\t\tyou selected %d seats in Diamond\n\n", f);




		  cout<< ("\n\t\t\t bill of movie tikites");




		  cout<< ("\n\tMovies name ");




		  cout<< ("\t\tShow timeing ");




		  cout<< ("\t\tTikites price");




		  cout<< ("\ninception");




		  cout<< ("\t\t 4:45");




		  cout<< ("\t\t\t120");




		  cout<< ("\t\t\t ");




		  cout<< ("\t\ntotal amount\t");




		  total = price * f;




		  cout<< ("%d + %d tikites = %d\n", price, f, total);




		  cout<< ("\n\tlist of payment methods ");




		  cout<< ("\n\tPrees 1 for select Paytm");




		  cout<< ("\n\tPrees 2 for select Gpay");




		  cout<< ("\n\tPrees 3 for select Phonepay");




		  cout<< ("\n\tPrees 4 for select COD(Cash on Delivery)");




		 cin>>p;




		  if (p == 1)




		    {




		      cout<<
			("\nyou are selected Paytm tp pay ticket amount");




		      cout<< ("\nPaytm id:JIOcinema123@Paytm");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 2)




		    {




		      cout<< ("\nyou are selected GPay tp pay ticket amount");




		      cout<< ("\nGPay id:JIOcinema123@GPay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else if (p == 3)




		    {




		      cout<<
			("\nyou are selected PhonePay tp pay ticket amount");




		      cout<< ("\nPhonePay id:JIOcinema123@PhonePay");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }




		  else




		    {




		      cout<<
			("\nyou are selected COD(Cash on Delivery) tp pay ticket amount");




		      cout<< ("\nplease pay the Cash in Cash counter ");




		      cout<<
			("\nyour payment has been successfully transferred");




		      cout<< ("\nGo and enjoy yor movie\n\n");




		    }





		  for (i = 1; i <= f; i++)




		    {



   cout<<("\n\n");

		      cout<< ("\t\t\t\t\t\tmovie ticket");




		      cout<< ("\n\n\tMovies name ");




		      cout<< ("\t\t\t\tShow timeing ");




		      cout<< ("\t\t\ttickets price for one in Gold");




		      cout<< ("\n\n\tInception\t");




		      cout<< ("\t\t\t 12:45 \t\t\t\t\t");




		      cout<< ("%d", price); 






		    }




		}




	    }



    
    }
    


     

    
};


int main()
{
 
   int age,i,n=100;
   
   char name[20];
   
   
   
    do
    {
   
       
     cout<< ("\n\t\t\t\t/*****************//WELCOME TO JIO CINEMA//*****************/");




      cout<< ("\n\n\n\n\n\nwhat is your name ");




     cin>> name;




      cout<< ("%s", name);




      cout<< ("\nWHAT IS YOR AGE\t");




      cin>>age;
      
     
   
   if (age>=18)
   {
   
    one o1;
    choice c2;
    o1.data();
    c2.sel_any();
    
    
    
}
else
{
    cout<<"\n\nyou not able to book tikites";
}

   cout<<("\n\n\nCREATED BY \nSOLANKI TRUSHEN \nPRAJAPATI RUDRA\nRUDRA PITRODA\n\nGUIDED BY:-HARDIK TALSANIA\n\n\n");

 

}while(i>=n);


    
    return 0;
}










