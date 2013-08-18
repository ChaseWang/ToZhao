//
//  LTLetterObject.h
//  Letter
//
//  Created by wangtao on 13-8-18.
//  Copyright (c) 2013年 wangtao. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum 
{
    LTLetterSendTypeTiming = 1,         //定时
    LTLetterSendTypeRandomDate  = 2,     //随机
}LTLetterSendType;

typedef enum
{
    LTLetterTypeSend = 1,
    LTLetterTypeReceive = 2,
    LTLetterTypeCache = 3,
    LTLetterTypePublic = 4
}LTLetterType;

@interface LTLetterObject : NSObject
@property (nonatomic, strong) NSString *tilte;
@property (nonatomic, strong) NSDate *createDate;
@property (nonatomic, strong) NSDate *sendDate;
@property (nonatomic, strong) NSString *sendFrom;
@property (nonatomic, strong) NSString *sendTo;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, assign) LTLetterSendType sendType;
@property (nonatomic, assign) LTLetterType letterType;
@property (nonatomic, strong) NSDate *randomBeginDate;
@property (nonatomic, strong) NSDate *randomEndDate;
@property (nonatomic, assign) BOOL isRandomReceiver;
@property (nonatomic, assign) BOOL isPublic;
@property (nonatomic, strong) NSMutableArray *attachement;
@end
