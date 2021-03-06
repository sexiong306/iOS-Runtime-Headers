/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver> {
    EKEventStore *_externalEKStore;
    SGSqlEntityStore *_store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) SGSqlEntityStore *store;
@property (readonly) Class superclass;

+ (id)defaultEKStore;

- (void).cxx_destruct;
- (void)_addEKEventToCalendar:(id)arg1 storageEvent:(id)arg2 ekStore:(id)arg3;
- (BOOL)_cancelEKEvent:(id)arg1 ekStore:(id)arg2 error:(id*)arg3;
- (id)_eventsAssociatedWithStorageEvent:(id)arg1 store:(id)arg2;
- (BOOL)_isEKEventFromSuggestedCalendar:(id)arg1 ekStore:(id)arg2;
- (void)_removeEKEvent:(id)arg1 store:(id)arg2;
- (void)_removeEvent:(id)arg1;
- (BOOL)_updateEKEvent:(id)arg1 withEvent:(id)arg2 ekStore:(id)arg3 error:(id*)arg4;
- (void)_updateEvent:(id)arg1 withValuesFrom:(id)arg2 ekStore:(id)arg3;
- (void)addEvent:(id)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(id)arg1;
- (void)confirmEvent:(id)arg1;
- (id)ekStore;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1 andEKStore:(id)arg2;
- (void)orphanEvent:(id)arg1;
- (void)rejectEvent:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
