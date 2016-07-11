/*
 Copyright 2015 WonderPush

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "WPLog.h"

#import <Foundation/Foundation.h>

static BOOL _loggingEnabled;

void WPLogEnable(BOOL enabled)
{
    _loggingEnabled = enabled;
}

void WPLog(NSString *format, ...)
{
    if (!_loggingEnabled) return;
    va_list ap;
    va_start(ap, format);
    NSLogv(format, ap);
    va_end(ap);
}