
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

// amount of memory to be allocated for heap storage must be specified for every ANSI C++ program with the bur_heap_size variable
unsigned long bur_heap_size = 0xFFFF; 

void _INIT ProgramInit(void)
{
	// Insert code here 

}

void _CYCLIC ProgramCyclic(void)
{
	FBGate(&doorSM); 
	Speed = doorSM.Speed;
	doorSM.DriveCtrl.ETAD_Input = ETAD;
	CMD = doorSM.DriveCtrl.CMDD_Output;
	ledSM.state = doorSM.state;
	LedCtrl(&ledSM);
	L1 = ledSM.s1;
	L2 = ledSM.s2;
	L3 = ledSM.s3;
	L4 = ledSM.s4;
}	

void _EXIT ProgramExit(void)
{
	// Insert code here 

}
