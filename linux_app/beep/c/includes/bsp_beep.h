#ifndef _BSP_BEEP_H_
#define _BSP_BEEP_H_


//蜂鸣器的GPIO引脚号
//index = Pnx = (n-'A')*16 + x
//PC13 = ('C'-'A')*16 +13 = 45
#define BEEP_GPIO_INDEX 	"45"

/**
 * @brief  初始化蜂鸣器gpio相关
 * @return 
 *     @arg 0，正常
 *     @arg 1，export文件打开错误
 *     @arg 2，direction文件打开错误
 */
extern int beep_init(void);

/**
 * @brief  关闭蜂鸣器gpio的export输出
 * @return 0正常，非0，value文件打开错误
 */
extern int beep_deinit(void);

/**
 * @brief  蜂鸣器响
 * @return 0正常，非0，value文件打开错误
 */
extern int beep_on(void);

/**
 * @brief  关闭蜂鸣器gpio的export输出
 * @return 0正常，非0，unexport文件打开错误
 */
extern int beep_off(void);


#endif

