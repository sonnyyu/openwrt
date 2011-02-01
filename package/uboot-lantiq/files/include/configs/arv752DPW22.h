#ifndef __CONFIG_H_752DPW22
#define __CONFIG_H_752DPW22

#define CONFIG_ARV752DPW22	1
#define CONFIG_ARCADYAN		"ARV752DPW22"

#define CONFIG_SYS_MAX_RAM	64*1024*1024
#define	CONFIG_SYS_PROMPT	"ARV752DPW22 => "

#define CONFIG_AR8216_SWITCH	1
#define CONFIG_EBU_GPIO		0x2
#define CONFIG_SWITCH_PORT1
#define CONFIG_SWITCH_PIN	3
#define CONFIG_BUTTON_PORT0
#define CONFIG_BUTTON_PIN	13
#define CONFIG_BUTTON_LEVEL	0

#include "arcadyan-common.h"

#endif
