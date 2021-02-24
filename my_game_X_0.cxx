 #include <iostream>
 using namespace std;
   static int w;
    int q1 = 0;
    int q2 = 0;
    int q3;
    int q4;
    int q5;
    int q6;
    int q7;
    int q8;
    int q9;
    
    int i;
    
	
	
	 string pust1_1 = "-1-";
     string pust1_2 = "-4-";
     string pust1_3 = "-7-";
     string pust2_1 = "-2-";
     string pust2_2 = "-5-";
     string pust2_3 = "-8-";
     string pust3_1 = "-3-";
     string pust3_2 = "-6-";
     string pust3_3 = "-9-"; 
     
 int clear()
 {
 	system("cls");
 	if(i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
 	{
 	cout<<"Ход ноликов. Возможные варианты: 1,2,3,4,5,6,7,8,9"<<endl;
 	cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
 	}
	
	if(i == 2 || i == 4 || i == 6 || i == 8 )
	{
 	cout<<"Ход крестиков. Возможные варианты: 1,2,3,4,5,6,7,8,9"<<endl;
 	cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
 	}
 }
 
 
 
 int winX(){  
 	 system("cls");
  	 cout<<"Итог: ";
       cout<<"Победили крестики!"<<endl;	 
        w = 1; 	
  	}
  	
 int winO(){
  	 system("cls");
  	 cout<<"Итог: ";
  	 cout<<"Победили нолики!"<<endl;
  	 w = 2;
 }
  	 
 int podl_winX(){
 	
            	if(pust1_1 == " X " && pust2_1 == " X "     && pust3_1 == " X "){
	           clear();
	            winX( );
	         }  
	          
	            if(pust1_2 == " X " && pust2_2 == " X " && pust3_2 == " X "){
	             clear();
	            winX( );
	            }
	            
	             if(pust1_3 == " X " && pust2_3 == " X " && pust3_3 == " X "){
	             clear();
	            winX( );
	            }
	            
	             if(pust1_1 == " X " && pust1_2 == " X " && pust1_3 == " X "){
	             clear();
	            winX( );
	            }
	            
	             if(pust2_1 == " X " && pust2_2 == " X " && pust2_3 == " X "){
	             clear();
	             winX( );
	            }
	            
	             if(pust3_1 == " X " && pust3_2 == " X " && pust3_3 == " X "){
	             clear();
	            winX( );
	            }
	            
	             if(pust1_1 == " X " && pust2_2 == " X " && pust3_3 == " X "){
	             clear();
	            winX( );
	          }
	            
	             if(pust1_3 == " X " && pust2_2 == " X " && pust3_1 == " X "){
	             clear();
	            winX( );
	         }
 }
 
 
 
 int podl_winO(){
 	
 	if(pust1_1 == " O " && pust2_1 == " O " && pust3_1 == " O "){
	             clear();
	            winO( );
	         }  
	          
	            if(pust1_2 == " O " && pust2_2 == " O " && pust3_2 == " O "){
	             clear();
	            winO( );
	            }
	            
	             if(pust1_3 == " O " && pust2_3 == " O " && pust3_3 == " O "){
	             clear();
	            winO( );
	            }
	            
	             if(pust1_1 == " O " && pust1_2 == " O " && pust1_3 == " O "){
	             clear();
	            winO( );
	            }
	            
	             if(pust2_1 == " O " && pust2_2 == " O " && pust2_3 == " O "){
	             clear();
	             winO( );
	            }
	            
	             if(pust3_1 == " O " && pust3_2  == " O " && pust3_3 == " O "){
	             clear();
	            winO( );
	            }
	            
	             if(pust1_1 == " O " && pust2_2 == " O " && pust3_3 == " O "){
	             clear();
	            winO( );
	            }
	            
	             if(pust1_3 == " O " && pust2_2 == " O " && pust3_1 == " O "){
	             clear();
	            winO( );
	            }
 }


  
 
   int xod(){           
     int X_xod;
     int O_xod;
     cout<<"Ход крестиков. Возможные варианты: 1,2,3,4,5,6,7,8,9"<<endl;
     cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	
       for( i =1; i<=9; i++)
       {
       	
       	
    	if(i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
       	{       		
       		cout<<"Ваш ход: ";			
	     	cin>>X_xod;		     
		
		    if( X_xod == 1){
	        pust1_1 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      
	      podl_winX();
	      
	     if( w == 1){
	     	break;
	     }
	
	           	                  
		 }
		
		  else if( X_xod == 4){
	        pust1_2 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      
	       podl_winX( );	  
	      if( w == 1){
	     	break;
	     }          
	
		 }
		
		  else if( X_xod == 7){
	        pust1_3 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	    
	           
	            podl_winX( );
	      if( w == 1){
	     	break;
	     }
	      
		 }
		
		 else  if( X_xod == 2){
	        pust2_1 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	    
	           
	            podl_winX( );
	     if( w == 1){
	     	break;
	     }
	
		 }
		
		 else  if( X_xod == 5){
	        pust2_2 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      
	           
	            podl_winX( );
	        if( w == 1){
	          	break;
	        }         
	
	 }
		
		 else  if( X_xod == 8){
	        pust2_3 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	    
	           
	            podl_winX( );
	         if( w == 1){
	         	break;
	         }  
	            
		 }
		
		else  if( X_xod == 3){
	        pust3_1 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	     
	      podl_winX( );
	     if( w == 1){
	     	break;
	     }
	 }
		
		   else if( X_xod == 6){
	        pust3_2= " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	   
	           
	            podl_winX( );
	     if( w == 1){
	     	break;
	     }
	
   }
		
		   else if( X_xod == 9){
	        pust3_3 = " X ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	
	           
	            podl_winX( );
	     if( w == 1){
	     	break;
	     }
	
	}
		 
		 else {
		  cout<<"Ошибка! Попробуй снова" <<endl;          system("pause");
		i = i-1;	
    	}
    	
    	clear();
}    	
    	
        if(i == 2 || i == 4 || i == 6 || i == 8 ){
        	cout<<"Ваш ход: ";
    		cin>>O_xod;		     
		
		    if( O_xod == 1){
	        pust1_1 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	     podl_winO();
	       if( w == 2){
	     	break;
	     }
		 }
		
		  else if( O_xod == 4){
	        pust1_2 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	      
	        if( w == 2){
	     	break;
	     }
		 }
		
		  else if( O_xod == 7){
	        pust1_3 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	        if( w == 2){
	     	break;
	     }
		 }
		
		 else  if( O_xod == 2){
	        pust2_1 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	      
	        if( w == 2){
	     	break;
	     }
		 }
		
		 else  if( O_xod == 5){
	        pust2_2 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	      
	        if( w == 2){
	     	break;
	     }
	      
		 }
		
		 else  if( O_xod == 8){
	        pust2_3 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	      
	        if( w == 2){
	     	break;
	     }
		 }
		
		else  if( O_xod == 3){
	        pust3_1 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	      
	        if( w == 2){
	     	break;
	     }
	 }
		
		   else if( O_xod == 6){
	        pust3_2= " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	      
	        if( w == 2){
	     	break;
	     }
	
	 }
		
		   else if( O_xod == 9){
	        pust3_3 = " O ";
	        cout<<"|" << pust1_1 << "|" << pust2_1  << "|" << pust3_1 <<  "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_2 << "|" << pust2_2 << "|" << pust3_2 << "|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<< pust1_3 << "|" << pust2_3 << "|" << pust3_3  << "|"<<endl;
	      podl_winO();
	      
	       if( w == 2){
	     	break;
	     } 
	      
		 }
		 
		 else {
		  cout<<"Ошибка! Попробуй снова"<<endl;	      system("pause");
         i = i -1;
		 }
		 
		 clear();
		 
     } 
         		
   } 
} 


int main(int argc, char *argv[])
{
	
	cout<<"Привет!"<<endl;
	cout<<"Это ваша игровая доска. "<<endl;
	cout<<"Можете выбрать цвет консольного вывода: "<<endl;
	cout<<"1. Голубой"<<endl;
	cout<<"2. Красный"<<endl;
	cout<<"3. Зелёный"<<endl;
	cout<<"4. Белый"<<endl;
	int col;
	cout<<"Цвет: ";
	cin>>col;
	if(col == 3){
	    system("color 20" );
	    system("cls");	
	}
	
	if( col == 1){
	   system("color 30" );
	   system("cls");	
	}
	
	
	if( col == 2){
    	system("color 40" );
    	system("cls");
	}
	
	if(col == 4){
	    system("color 70" );
	    system("cls");	
	}
	
	
	xod();
}


  