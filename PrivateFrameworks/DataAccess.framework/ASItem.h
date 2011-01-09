/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASItem, NSMutableDictionary, NSObject<ASParsing>, NSInvocation;



@interface ASItem : NSObject <ASParsing>
{
    ASItem *_root;
    ASItem *_parent;
    NSInteger _codePage;
    NSInteger _token;
    NSObject<ASParsing> *_currentlyParsingSubItem;
    NSInteger _currentlyParsingCPTNumber;
    NSInvocation *_currentStreamInvocation;
    NSInteger _parsingState;
    NSMutableDictionary *_parseRuleUsageNumbers;
}


- (id)init;
- (void)dealloc;
- (NSInteger)_streamYourLittleHeartOutWithContext:(id)arg1;
- (BOOL)nextParsedObjectWithContext:(id)arg1 root:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 collectionClassType:(NSInteger)arg5 outParsedObject:(id*)arg6 outCPTNumber:(NSInteger*)arg7;
- (void)_setCurrentlyParsingSubItem:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5;
- (id)parent;
- (BOOL)_itemPathMatches:(id)arg1;
- (id)_replacementObjectWithCallbackDict:(id)arg1;
- (BOOL)_itemPathWithCCPTMatches:(id)arg1 ccpt:(NSInteger)arg2;
- (id)_streamingInvocationForStreamingCallbackDict:(id)arg1 ccpt:(NSInteger)arg2;
- (void)ignoreThisContent:(id)arg1;
- (id)asParseRules;
- (NSInteger)parsingState;
- (id)currentStreamInvocation;
- (void)setCurrentStreamInvocation:(id)arg1;

@end