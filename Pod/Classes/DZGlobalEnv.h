//
//  DZGlobalEnv.h
//  Pods
//
//  Created by stonedong on 16/9/13.
//
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    DZGlobalEnvNormal=0,
    DZGlobalEnvDebug=1,
    DZGlobalEnvTest=2,
} DZGlobalEnvType;

#define DEBUG_DZGlobalEnv DZShareEnv() == DZGlobalEnvDebug
#define NORAML_DZGlobalEnv DZShareEnv() == DZGlobalEnvNormal
#define TEST_DZGlobalEnv DZShareEnv() == DZGlobalEnvTest

FOUNDATION_EXTERN DZGlobalEnvType DZShareEnv();
FOUNDATION_EXTERN void DZChangedShareEnv(DZGlobalEnvType env);
