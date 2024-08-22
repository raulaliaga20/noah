#include <16F877A.h>                 
#fuses XT, NOWDT, NOPUT, NOBROWNOUT, NOLVP, NOCPD, NOWRT, NODEBUG, NOPROTECT     
#use delay(crystal=4MHz)         
//#use fast_io(B)

void main()
{
 int i=0;
 set_tris_b(0);
 
   while(TRUE)
   {
      //for(i=0; i<=255; i++)
      //{
         i++;
         output_b(i);  
         delay_ms(250);
      //} 
   }
}
