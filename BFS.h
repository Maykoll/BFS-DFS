// deveria ser algo asi pero ya no alcanso a terminar nada 

BFS(G,s) 
 {  
  
   int d[N], p[N], color[N]; 
   Cola Q;	
   for ( cada vértice u ? V[G] -{s}) 
   {
     color [u] =Blanco;		
     d[u] = -1;  // deveria ser infinito pero nose como ponerlo o seria...
   }	
      color[s] =gris;
      d[s] = 0; 
      p [s]=NULL;
      llegada(Q, s);  // se agrega s ala cola 
   while ( !esVacia(Q) ) 
   {
      u = Cabeza(Q);   
      for ( for i=0; i<adyacentes[u]; i++ )
      {
        if (color [v] == Blanco) 
        {			
          color[v]=Plomo;  			
          d [i]=d [i] +1;			
          p [i] = u;		
          llegada(Q,i);		
        }	
          color [i] = Negro;  
      }
   }
  }  
