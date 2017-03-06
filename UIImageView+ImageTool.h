//
//  UIImageView+ImageTool.h
//  ycBook
//
//  Created by LaiWang on 2017/3/3.
//  Copyright © 2017年 Alexander. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (ImageTool)

/** 解析gif文件数据的方法 block中会将解析的数据传递出来 */
-(void)getGifImageWithUrk:(NSURL *)url returnData:(void(^)(NSArray<UIImage *> * imageArray,NSArray<NSNumber *>*timeArray,CGFloat totalTime, NSArray<NSNumber *>* widths, NSArray<NSNumber *>* heights))dataBlock;

/** 为UIImageView添加一个设置gif图内容的方法： */
-(void)yh_setImage:(NSURL *)imageUrl;

@end
