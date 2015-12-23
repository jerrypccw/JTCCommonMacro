//
//  DBDefaultMarco.h
//  JTCMarcoDefine
//
//  Created by JTC on 15/12/9.
//  Copyright © 2015年 JTC. All rights reserved.
//

#ifndef DBDefaultMarco_h
#define DBDefaultMarco_h

//---------------文件目录沙盒-------------------

#define kPathTemp                   NSTemporaryDirectory()
#define kPathDocument               [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

#define kPathCache                  [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]

#define kPathSearch(plist)          [kPathCache stringByAppendingPathComponent:plist]


//---------------NSUserDefaults---------------

#define kNSUserDefaults [NSUserDefaults standardUserDefaults]



//---------------屏幕分辨率---------------------
// 设置Frame的分辨率
#define VIEW_RATE ([[UIScreen mainScreen] bounds].size.width / 640.0f)
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

//---------------iOS版本适配---------------------
#define iOS6    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define iOS7    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define iOS8    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

//-----------------iOS型号---------------------
#define iOS     [[UIDevice currentDevice] model]

//-----------------是否iPad--------------------
#define isPad   (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad   ? YES : NO)

//-----------------参看版本------------------------
#define AppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

//-----------------高度--------------------------

#define kStatusBarHeight                 20
#define kNavigationBarHeight             44
#define kStatusBarAndNavigationBarHeight 64

//------------------设置字体--------------------
#define kFont(F)                    [UIFont systemFontOfSize:(F)]

//------------------调试状态---------------------
#ifdef DEBUG  // 调试状态
// 打开LOG功能
#define MYLog(...) NSLog(__VA_ARGS__)
#else // 发布状态
// 关闭LOG功能
#define MYLog(...)
#endif


//-----------------颜色-------------------
//RBG
#define kColorMakeWithRGB(x,y,z,a) [UIColor colorWithRed:x/255.0 green:y/255.0 blue:z/255.0 alpha:a]
//十六进制
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]    
//使用方法:UIColorFromRGB(0xF3F6FA)


#endif /* DBDefaultMarco_h */
