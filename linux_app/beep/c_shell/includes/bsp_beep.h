#ifndef _BSP_BEEP_H_
#define _BSP_BEEP_H_


//蜂鸣器的GPIO引脚号
//index = Pnx = (n-'A')*16 + x
//PC13 = ('C'-'A')*16 +13 = 45
#define BEEP_GPIO_INDEX 	"45"

/**
 * @brief  初始化蜂鸣器gpio相关
 */
extern void beep_init(void);

/**
 * @brief  关闭蜂鸣器gpio的export输出
 */
extern void beep_deinit(void);

extern void beep_on(void);
extern void beep_off(void);


#endif

