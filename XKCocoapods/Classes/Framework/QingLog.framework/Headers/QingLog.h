//
//  QingLog.h
//  QingLogFrameWork
//
//  Created by 黄亚川 on 2020/6/29.
//  Copyright © 2020 h yc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QingLog : NSObject


/// 初始化
/// @param folder 设置日志目录文件夹
- (instancetype)initWithLogFolder:(NSString*)folder;

/// 初始化
/// @param folder 设置日志目录文件夹
/// @param fileSize 日志文件大小，单位是MB
- (instancetype)initWithLogFolder:(NSString*)folder fileSize:(NSInteger)fileSize;

/// 初始化
/// @param folder 设置日志目录文件夹
/// @param fileSize 日志文件大小，单位是MB
/// @param maxLogFile 保存文件的个数，默认5个
- (instancetype)initWithLogFolder:(NSString*)folder fileSize:(NSInteger)fileSize maxLogFile:(NSInteger)maxLogFile;


/// 输出日志
/// @param logStr 日志内容
- (void)logStr:(NSString*)logStr;
@end

NS_ASSUME_NONNULL_END
