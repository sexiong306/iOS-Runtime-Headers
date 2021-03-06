/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKIntelligentSketchController : NSObject <AKSmoothPathViewDelegate> {
    NSMutableArray *_candidateAKTags;
    NSMutableDictionary *_candidateAKTagsToCHElementMap;
    AKAnnotation *_candidateAnnotation;
    CHDrawing *_candidateDrawing;
    AKCandidatePickerView_iOS *_candidatePickerView;
    AKController *_controller;
    BOOL _ignoreAnnotationAndSelectionKVO;
    AKSmoothPathView *_intelligentSketchOverlayView;
    BOOL _isShowingOverlay;
    CHDrawing *_lastDrawing;
    AKPageModelController *_modelControllerToObserveForAnnotationsAndSelections;
    BOOL _preferDoodle;
    BOOL _pressureSensitiveDoodleMode;
    BOOL _selectNewlyCreatedAnnotations;
    BOOL _shapeDetectionEnabled;
    CHRecognizer *_shapeRecognizer;
    double _veryHighConfidenceLevel;
}

@property (retain) NSMutableArray *candidateAKTags;
@property (retain) NSMutableDictionary *candidateAKTagsToCHElementMap;
@property AKAnnotation *candidateAnnotation;
@property (retain) CHDrawing *candidateDrawing;
@property (nonatomic, retain) AKCandidatePickerView_iOS *candidatePickerView;
@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL ignoreAnnotationAndSelectionKVO;
@property (nonatomic, retain) AKSmoothPathView *intelligentSketchOverlayView;
@property BOOL isShowingOverlay;
@property (retain) CHDrawing *lastDrawing;
@property (nonatomic, retain) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections;
@property (nonatomic) BOOL preferDoodle;
@property BOOL pressureSensitiveDoodleMode;
@property (nonatomic) BOOL selectNewlyCreatedAnnotations;
@property (getter=shapeDetectionEnabled, nonatomic) BOOL shapeDetectionEnabled;
@property (nonatomic, retain) CHRecognizer *shapeRecognizer;
@property (readonly) Class superclass;
@property double veryHighConfidenceLevel;

- (void).cxx_destruct;
- (void)_clearPreviousCandidateAnnotation;
- (id)_convertDrawingBoundsInInputView:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 outBoundsInPageModel:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (id)_convertRichBrushStrokesInInputView:(id)arg1 toPage:(id)arg2;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 shouldGoToPageController:(id*)arg3;
- (id)_createCHDrawingFromRichBrushStrokes:(id)arg1;
- (id)_createDoodleShapeResultFromCGPath:(struct CGPath { }*)arg1 withDrawingCenter:(struct CGPoint { float x1; float x2; })arg2;
- (id)_createDoodleShapeResultFromRichBrushStrokePoints:(id)arg1 withDrawingCenter:(struct CGPoint { float x1; float x2; })arg2;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOurOverlayInHostingView:(id)arg1;
- (void)_inputView:(id)arg1 didCollectRichBrushStrokePoints:(id)arg2 orPath:(struct CGPath { }*)arg3;
- (BOOL)_isResultVeryHighConfidence:(id)arg1;
- (void)_logAllResults:(id)arg1;
- (void)_logCollectedBrushStrokes:(id)arg1 andPath:(struct CGPath { }*)arg2;
- (void)_pickCandidateResult:(id)arg1;
- (void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2;
- (BOOL)_shouldSelectCandidate:(id)arg1;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(BOOL)arg3;
- (void)_teardownCandidatePicker;
- (void)_teardownCandidatePickerBar;
- (int)_toolTagForCHRecognitionResult:(id)arg1;
- (id)candidateAKTags;
- (id)candidateAKTagsToCHElementMap;
- (id)candidateAnnotation;
- (id)candidateDrawing;
- (id)candidatePickerView;
- (id)controller;
- (void)dealloc;
- (void)dismissCandidatePicker;
- (void)enclosingScrollViewNotification:(id)arg1;
- (void)handleDragAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (BOOL)ignoreAnnotationAndSelectionKVO;
- (id)initWithController:(id)arg1;
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath { }*)arg2;
- (void)inputView:(id)arg1 didCollectRichBrushStrokePoints:(id)arg2;
- (void)inputViewWillStartDrawing:(id)arg1;
- (id)intelligentSketchOverlayView;
- (BOOL)isShowingCandidatePicker;
- (BOOL)isShowingOverlay;
- (id)lastDrawing;
- (void)logLastDrawingToDisk;
- (id)modelControllerToObserveForAnnotationsAndSelections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)preferDoodle;
- (BOOL)pressureSensitiveDoodleMode;
- (void)removeOverlay;
- (BOOL)selectNewlyCreatedAnnotations;
- (void)setCandidateAKTags:(id)arg1;
- (void)setCandidateAKTagsToCHElementMap:(id)arg1;
- (void)setCandidateAnnotation:(id)arg1;
- (void)setCandidateDrawing:(id)arg1;
- (void)setCandidatePickerView:(id)arg1;
- (void)setController:(id)arg1;
- (void)setIgnoreAnnotationAndSelectionKVO:(BOOL)arg1;
- (void)setIntelligentSketchOverlayView:(id)arg1;
- (void)setIsShowingOverlay:(BOOL)arg1;
- (void)setLastDrawing:(id)arg1;
- (void)setModelControllerToObserveForAnnotationsAndSelections:(id)arg1;
- (void)setPreferDoodle:(BOOL)arg1;
- (void)setPressureSensitiveDoodleMode:(BOOL)arg1;
- (void)setSelectNewlyCreatedAnnotations:(BOOL)arg1;
- (void)setShapeDetectionEnabled:(BOOL)arg1;
- (void)setShapeRecognizer:(id)arg1;
- (void)setVeryHighConfidenceLevel:(double)arg1;
- (BOOL)shapeDetectionEnabled;
- (id)shapeRecognizer;
- (void)showOverlay;
- (void)updateOverlayBoundsAndBackingScale:(id)arg1;
- (void)updateStrokeAttributes;
- (double)veryHighConfidenceLevel;

@end
