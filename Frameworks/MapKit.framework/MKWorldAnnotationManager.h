/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKWorldAnnotationManagerDragDelegate>, VKAnnotationMarker;

@interface MKWorldAnnotationManager : MKAnnotationManager <VKAnnotationMarkerDelegate> {
    BOOL _didDragAnnotationMarker;
    <MKWorldAnnotationManagerDragDelegate> *_dragDelegate;
    VKAnnotationMarker *_draggingAnnotationMarker;
}

@property <MKWorldAnnotationManagerDragDelegate> * dragDelegate;
@property(readonly) VKAnnotationMarker * draggingAnnotationMarker;

- (void)animateAnnotationRepresentation:(id)arg1 fromCoordinate:(struct { double x1; double x2; })arg2 duration:(double)arg3;
- (void)annotationMarker:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)dealloc;
- (id)dragDelegate;
- (id)draggingAnnotationMarker;
- (void)draggingTouchMovedToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dropDraggingAnnotationMarker:(BOOL)arg1 atCoordinate:(struct { double x1; double x2; })arg2;
- (void)liftAnnotationMarkerForDragging:(id)arg1;
- (id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setDragDelegate:(id)arg1;

@end