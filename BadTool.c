//****************************************************************
// BadTool
//----------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//----------------------------------------------------------------
// Private Structures
//----------------------------------------------------------------
typedef struct FooBlock
{
  int     strLen;
  int     strType;
  char    aStr[50];
}
FooBlock, *FooBlockPtr;

//----------------------------------------------------------------
// Private Prototypes
//----------------------------------------------------------------
void FillMemoryWithString( char* theBuffer, int theSize, char* fillString );
void FillMemoryWithChar( char* theBuffer, int theSize, char theChar );
void SetupFooBlock( FooBlock** fooBlock );

//****************************************************************
// main
//
//----------------------------------------------------------------
int main (int argc, const char * argv[])
{
  char*        aString;
  FooBlock*    fooBlock;
  
  //--- Print a character ruler ---------------------------
  printf( "\x1B[34m" );
  printf( "000000000111111111122222222223333333333444444444455555555556\n" );
  printf( "123456789012345678901234567890123456789012345678901234567890\n" );
  printf( "------------------------------------------------------------\n" );
  printf( "\x1B[37m" );
  
  
  SetupFooBlock( &fooBlock );
  
  //--- Allocate memory for following exercises ------
  aString = malloc( 60 );

  //--- Fill memory with a string --------------------
  FillMemoryWithString( aString, 50, "Happy " );
  printf( "%s\n", aString );
  
  //--- Fill memory with a character -----------------
  //FillMemoryWithChar( aString, 40, '=' );
  //printf( "%s\n", aString );
  
  //--- Print FooBlock details -----------------------
  //if ( fooBlock->strLen > 30 )
  //{
  //  printf( "FooBlock strLen = %d\n", fooBlock->strLen );
  //  printf( "FooBlock strType = %d\n", fooBlock->strType );
  //}
  
  //printf( "%s\n", fooBlock->aStr );

  //--- Free the memory we allocated ------------------
  free( aString );
  
  return 0;
}

//****************************************************************
// FillMemoryWithString
//
//  This routine will fill the given buffer with as many WHOLE
//  copies of the fillString as will fit in the limit of theSize.
//----------------------------------------------------------------
void FillMemoryWithString( char* theBuffer, int theSize, char* fillString )
{
  int      bytesUsed = 0;
  int      strSize;
  char*    curPos;
  
  //--- Set up some vars -------------------------------------
  curPos = theBuffer;
  strSize = strlen( fillString );
  
  //--- Fill the buffer --------------------------------------
  while( bytesUsed <= theSize )
  {
    memcpy( curPos, fillString, strSize );
    bytesUsed += strSize;
    curPos += strSize;
  }
}

//****************************************************************
// FillMemoryWithChar
//
//  This routine fills the given memory with the given char.
//----------------------------------------------------------------
void FillMemoryWithChar( char* theBuffer, int theSize, char theChar )
{
  int    index;
  
  for ( index = 0; index <= theSize; index++ )
    theBuffer[index] = theChar;
}

//****************************************************************
// SetupFooBlock
//
//  This routine sets up the FooBlock structure.
//----------------------------------------------------------------
void SetupFooBlock( FooBlock** fooBlock )
{
  char      aString[] = "YooHoo";
  FooBlock  localFooBlock;
  
  localFooBlock.strLen = strlen(aString);
  localFooBlock.strType = 7;
  
  memcpy( localFooBlock.aStr, aString, strlen(aString) );
  
  *fooBlock = &localFooBlock;
}