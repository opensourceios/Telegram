#import <Foundation/Foundation.h>

#import "TGMusicPlayerItem.h"

@interface TGMusicPlayerPlaylist : NSObject

@property (nonatomic, readonly) bool voice;
@property (nonatomic, strong, readonly) NSArray *items;
@property (nonatomic, strong, readonly) NSDictionary *itemKeyAliases;
@property (nonatomic, copy, readonly) void (^markItemAsViewed)(TGMusicPlayerItem *item);

- (instancetype)initWithVoice:(bool)voice items:(NSArray *)items itemKeyAliases:(NSDictionary *)itemKeyAliases markItemAsViewed:(void (^)(TGMusicPlayerItem *item))markItemAsViewed;

@end
