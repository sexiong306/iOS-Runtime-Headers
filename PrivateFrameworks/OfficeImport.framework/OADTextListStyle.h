/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextListStyle : NSObject {
    NSString *mLanguage;
    NSMutableArray *mParagraphProperties;
}

@property (nonatomic, retain) NSString *language;

+ (id)defaultObject;

- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)dealloc;
- (id)defaultProperties;
- (id)description;
- (void)enumerateParagraphPropertiesUsingBlock:(id /* block */)arg1;
- (void)flatten;
- (id)init;
- (id)initWithDefaults;
- (id)language;
- (void)overrideWithTextStyle:(id)arg1;
- (id)propertiesForListLevel:(unsigned int)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setLanguage:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setPropertiesForListLevel:(unsigned int)arg1 properties:(id)arg2;

@end
