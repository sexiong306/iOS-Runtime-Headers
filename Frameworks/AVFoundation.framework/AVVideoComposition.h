/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionCoreAnimationTool, AVVideoCompositionInternal, NSArray;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
    AVVideoCompositionInternal *_videoComposition;
}

@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property(readonly) struct CGSize { float width; float height; } renderSize;
@property(readonly) float renderScale;
@property(copy,readonly) NSArray * instructions;
@property(retain,readonly) AVVideoCompositionCoreAnimationTool * animationTool;

+ (id)videoCompositionForAsset:(id)arg1;
+ (id)videoCompositionForAsset:(id)arg1 videoGravity:(id)arg2;

- (void)finalize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCompositor:(id)arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRenderScale:(float)arg1;
- (id)instructions;
- (void)setInstructions:(id)arg1;
- (void)setAnimationTool:(id)arg1;
- (BOOL)isValidForAsset:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 validationDelegate:(id)arg3;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingVideoLayer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)_serializableInstructions;
- (id)compositor;
- (id)animationTool;
- (struct CGSize { float x1; float x2; })renderSize;
- (BOOL)_isValidReturningExceptionReason:(id*)arg1;
- (float)renderScale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end