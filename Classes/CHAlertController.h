//
//  CHAlertController.h
//  自定义弹窗字体颜色
//
//  Created by QCJJ－iOS on 16/10/20.
//  Copyright © 2016年 QCJJ－iOS. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark - 自定义 CHAlertController
@interface CHAlertController : UIAlertController
/**<
 统一按钮样式 不写系统默认的蓝色
 */
@property (nonatomic,strong) UIColor * tintColor;
/**<
 标题的颜色 不写系统默认
 */
@property (nonatomic,strong) UIColor * titleColor;
/**<
 信息的颜色  不写系统默认
 */
@property (nonatomic,strong) UIColor * messageColor;

/** alertView的回调block */

typedef void (^CallBackBlock)(NSInteger btnIndex);

/** alertView的回调block */

typedef void (^TextFieldCallBackBlock)(NSString * text);


/*!
 @brief 初始化类方法非常全
 @param title  标题
 @param message  内容
 @param preferredStyle  UIAlertController的类型
 @param block  如果有选项 回调方法
 取消 cancelBtnTitle 下标固定0
 警告 destructiveBtnTitle 下标固定1
 其他 otherBtnTitles 从2开始自增
 @param titleColor  标题 若颜色为 nil 默认为系统颜色
 @param messageColor  内容 若颜色为 nil 默认为系统颜色
 @param cancelButtonColor  取消按钮 若颜色为 nil 默认为系统颜色
 @param destructiveButtonColor  “警示”样式的按钮  若颜色为 nil 默认为系统颜色
 @param otherBtnTintColor  其他按钮 若颜色为 nil 默认为系统颜色
 @param cancelBtnTitle  取消按钮
 @param destructiveBtnTitle  “警示”样式的按钮
 @param otherBtnTitles  其他按钮
 @return 返回说明
 */
+(instancetype)CHAlertControllerWithTitle:(NSString *)title  message:(NSString *)message preferredStyle:(UIAlertControllerStyle)preferredStyle CallBackBlock:(CallBackBlock)block  titleColor:(UIColor *)titleColor messageColor:(UIColor *)messageColor cancelButtonColor:(UIColor *)cancelButtonColor destructiveButtonColor:(UIColor *)destructiveButtonColor otherBtnTintColor:(UIColor *)otherBtnTintColor cancelButtonTitle:(NSString *)cancelBtnTitle destructiveButtonTitle:(NSString *)destructiveBtnTitle otherButtonTitles:(NSArray *)otherBtnTitles;


/*!
 @brief 系统默认颜色
 @param title  标题
 @param message  内容
 @param preferredStyle  UIAlertController的类型
 UIAlertControllerStyleActionSheet上下
 UIAlertControllerStyleAlert 左右
 @param block  如果有选项 回调方法
 取消 cancelBtnTitle 下标固定0
 警告 destructiveBtnTitle 下标固定1
 其他 otherBtnTitles 从2开始自增
 @param cancelBtnTitle  取消按钮
 @param destructiveBtnTitle  “警示”样式的按钮
 @param otherBtnTitles  其他按钮
 @return 返回说明
 */
+(instancetype)CHAlertControllerWithTitle:(NSString *)title  message:(NSString *)message preferredStyle:(UIAlertControllerStyle)preferredStyle CallBackBlock:(CallBackBlock)block cancelButtonTitle:(NSString *)cancelBtnTitle destructiveButtonTitle:(NSString *)destructiveBtnTitle otherButtonTitles:(NSArray *)otherBtnTitles;
/*!
 @brief 系统默认颜色 中间显示双按钮
 @param title  标题
 @param message  内容
 @param block  如果有选项 回调方法
 取消 cancelBtnTitle 下标固定0
 警告 destructiveBtnTitle 下标固定1
 其他 otherBtnTitles 从2开始自增
 @param cancelBtnTitle  取消按钮
 @param destructiveBtnTitle  “警示”样式的按钮
 @return 返回说明
 */
+(instancetype)CHAlertControllerWithTitle:(NSString *)title  message:(NSString *)message CallBackBlock:(CallBackBlock)block cancelButtonTitle:(NSString *)cancelBtnTitle destructiveButtonTitle:(NSString *)destructiveBtnTitle;


/**
 系统权限提示弹窗
 
 @param message 内容
 @param block 回调
 @return 返回说明
 */
+(instancetype)CHAlertControllerAuthorizationStatusWithMessage:(NSString *)message CallBackBlock:(CallBackBlock)block;
@end

#pragma mark - 自定义 CHAlertAction
@interface CHAlertAction : UIAlertAction

@property (nonatomic,strong) UIColor *textColor; /**< 按钮title字体颜色 */

@end

