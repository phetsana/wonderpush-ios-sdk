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

#import <Foundation/Foundation.h>

@interface WPJsonUtil : NSObject

+ (NSDictionary *) merge:(NSDictionary *)base with:(NSDictionary *)diff;

+ (NSDictionary *) merge:(NSDictionary *)base with:(NSDictionary *)diff nullFieldRemoves:(BOOL)nullFieldRemoves;

+ (NSDictionary *) diff:(NSDictionary *)from with:(NSDictionary *)to;

+ (id) ensureJSONEncodable:(id)data;

@end
