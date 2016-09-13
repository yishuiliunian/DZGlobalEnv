//
//  DZGlobalEnv.m
//  Pods
//
//  Created by stonedong on 16/9/13.
//
//

#import "DZGlobalEnv.h"

static DZGlobalEnvType shareEnv = DZGlobalEnvNormal;
DZGlobalEnvType DZShareEnv()
{
    return shareEnv;
}

void DZChangedShareEnv(DZGlobalEnvType env) {
    shareEnv = env;
}
