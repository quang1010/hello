//This program is the class declaration of the AverageMark class


   #include <iostream> // needed for cout function
   #include <cstdlib>  // needed for exit function

   #include "AverageMark.h"

   using namespace std;

   // MUTATOR
   void AverageMark::setMath(double mat)
   {
      if (mat<=10) && (mat>=0)
         Math = mat;
      else
      {
         cout << "Invalid input Math\n";
         exit(EXIT_FAILURE);
      }
   }
   void AverageMark::setLite (double lit)
   {
      if (lit <=10) && (lit>= 0)
         Lite = lit;
      else
      {
         cout<<"Invalid Input Literature\n";
         exit(EXIT_FAILURE);
      }
   }
   void AverageMark::setEngs (double eng)
   {
      if (eng <=10) &&(eng >=0)
         Engs = eng;
      else
      {
         cout<<"Invalid Input English\n";
         exit(EXIT_FAILURE);
      }
    }
   //ACCESSOR
   double AverageMark::getMath ()
   {
      return Math;
   }
   double AverageMark::getEngs()
   {
      return Engs;
   }
   double AverageMark::getLite()
   {
      return Lite;
   }
   double AverageMark::getAver()
   {
      return (Lite + Math + Engs ) / 3;
   }
