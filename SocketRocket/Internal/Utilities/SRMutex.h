//
// Copyright (c) 2016-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree. An additional grant
// of patent rights can be found in the PATENTS file in the same directory.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef pthread_mutex_t *SRMutex;

extern SRMutex SRMutexInitRecursive(void);
extern void SRMutexDestroy(SRMutex mutex);

extern void SRMutexLock(SRMutex mutex);
extern void SRMutexUnlock(SRMutex mutex);

NS_ASSUME_NONNULL_END
