/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingVideoViewController : MPUNowPlayingVideoViewController <MPVideoOverlayDelegate> {
    UITapGestureRecognizer *_tap;
    MPVideoPlaybackOverlayView *_videoOverlayView;
    NSObject<OS_dispatch_source> *_videoOverlayViewIdleTimer;
    <MusicNowPlayingVideoViewControllerDelegate> *_videoViewControllerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) <MusicNowPlayingVideoViewControllerDelegate> *videoViewControllerDelegate;

+ (int)_activityIndicatorViewStyle;

- (void).cxx_destruct;
- (void)_cancelIdleTimer;
- (void)_handleTap:(id)arg1;
- (void)_startIdleTimer:(double)arg1;
- (void)displayVideoViewOnScreen;
- (void)handleExternalPlaybackDidChange;
- (void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoViewControllerDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)videoOverlayView;
- (id)videoViewControllerDelegate;
- (void)viewDidLoad;

@end
