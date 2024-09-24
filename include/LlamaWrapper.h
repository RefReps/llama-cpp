//
//  LlamaWrapper.h
//  LocalAIChatApp
//
//  Created by Daniel Drake on 9/24/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LlamaWrapper : NSObject

- (instancetype)initWithModelPath:(NSString *)modelPath;
- (void)generateResponseForPrompt:(NSString *)prompt
                        maxTokens:(int)maxTokens
                          onToken:(void (^)(NSString *token))onToken
                       completion:(void (^)(NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
