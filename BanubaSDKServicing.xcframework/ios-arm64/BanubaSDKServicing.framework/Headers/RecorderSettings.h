//
//  RecorderSettings.h
//  RecorderSettings
//
//  Created by Andrei Sak on 10.09.21.
//

#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface RecorderSettings : NSObject

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithVideoDataOutput:(AVCaptureVideoDataOutput* _Nullable)videoDataOutput
                            captureSize:(CGSize)captureSize
                 useHEVCCodecIfPossible:(BOOL)useHEVCCodecIfPossible
                    isMicrophoneEnabled:(BOOL)isMicrophoneEnabled;

@property (readonly, strong, nonatomic) NSDictionary* videoSettings;
@property (readonly, assign, nonatomic) CGSize captureSize;
@property (readonly, nonatomic) BOOL isMicrophoneEnabled;

@end

NS_ASSUME_NONNULL_END
