#ifndef __MOD_INTERFACE_DEF__
#define __MOD_INTERFACE_DEF__

typedef enum
{
	//Encode
	CMD_ENC_RESETUSER = 0,
	CMD_ENC_GETFRAME,
	CMD_ENC_GETAESKEY,
	CMD_ENC_REGISTERUSER,
	CMD_ENC_RELEASEUSER,
	CMD_ENC_AUDIODECODE,
	CMD_ENC_AUDIODECODESWON,
	CMD_ENC_AUDIODECODESWOFF,

	//ThreadPool
	CMD_TPL_ADDTASK,

	//Meshare
	CMD_MSH_FUNC1,
	CMD_MSH_FUNC2,
	CMD_MSH_FUNC3,

	//Zsp
	CMD_ZSP_FUNC1,
	CMD_ZSP_FUNC2,
	CMD_ZSP_FUNC3,
	
	CMD_MAX
}MFI_CMD;

typedef enum
{
	MOD_ENC = 0,
	MOD_RTSP,
	MOD_MSH,
	MOD_ZSP,
	MOD_TPL,
	MOD_MAX
}MFI_MOD;

#endif //__MOD_INTERFACE_DEF__
