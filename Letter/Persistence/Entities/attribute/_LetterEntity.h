// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LetterEntity.h instead.

#import <CoreData/CoreData.h>


extern const struct LetterEntityAttributes {
	__unsafe_unretained NSString *content;
	__unsafe_unretained NSString *createDate;
	__unsafe_unretained NSString *isPublic;
	__unsafe_unretained NSString *isRandomReceiver;
	__unsafe_unretained NSString *letterType;
	__unsafe_unretained NSString *randomBeginDate;
	__unsafe_unretained NSString *randomEndDate;
	__unsafe_unretained NSString *sendDate;
	__unsafe_unretained NSString *sendFrom;
	__unsafe_unretained NSString *sendTo;
	__unsafe_unretained NSString *sendType;
	__unsafe_unretained NSString *title;
} LetterEntityAttributes;

extern const struct LetterEntityRelationships {
} LetterEntityRelationships;

extern const struct LetterEntityFetchedProperties {
} LetterEntityFetchedProperties;















@interface LetterEntityID : NSManagedObjectID {}
@end

@interface _LetterEntity : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (LetterEntityID*)objectID;




@property (nonatomic, strong) NSString* content;


//- (BOOL)validateContent:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate* createDate;


//- (BOOL)validateCreateDate:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber* isPublic;


@property BOOL isPublicValue;
- (BOOL)isPublicValue;
- (void)setIsPublicValue:(BOOL)value_;

//- (BOOL)validateIsPublic:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber* isRandomReceiver;


@property BOOL isRandomReceiverValue;
- (BOOL)isRandomReceiverValue;
- (void)setIsRandomReceiverValue:(BOOL)value_;

//- (BOOL)validateIsRandomReceiver:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber* letterType;


@property int16_t letterTypeValue;
- (int16_t)letterTypeValue;
- (void)setLetterTypeValue:(int16_t)value_;

//- (BOOL)validateLetterType:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate* randomBeginDate;


//- (BOOL)validateRandomBeginDate:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate* randomEndDate;


//- (BOOL)validateRandomEndDate:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate* sendDate;


//- (BOOL)validateSendDate:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString* sendFrom;


//- (BOOL)validateSendFrom:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString* sendTo;


//- (BOOL)validateSendTo:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber* sendType;


@property int16_t sendTypeValue;
- (int16_t)sendTypeValue;
- (void)setSendTypeValue:(int16_t)value_;

//- (BOOL)validateSendType:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString* title;


//- (BOOL)validateTitle:(id*)value_ error:(NSError**)error_;






@end

@interface _LetterEntity (CoreDataGeneratedAccessors)

@end

@interface _LetterEntity (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveContent;
- (void)setPrimitiveContent:(NSString*)value;




- (NSDate*)primitiveCreateDate;
- (void)setPrimitiveCreateDate:(NSDate*)value;




- (NSNumber*)primitiveIsPublic;
- (void)setPrimitiveIsPublic:(NSNumber*)value;

- (BOOL)primitiveIsPublicValue;
- (void)setPrimitiveIsPublicValue:(BOOL)value_;




- (NSNumber*)primitiveIsRandomReceiver;
- (void)setPrimitiveIsRandomReceiver:(NSNumber*)value;

- (BOOL)primitiveIsRandomReceiverValue;
- (void)setPrimitiveIsRandomReceiverValue:(BOOL)value_;




- (NSNumber*)primitiveLetterType;
- (void)setPrimitiveLetterType:(NSNumber*)value;

- (int16_t)primitiveLetterTypeValue;
- (void)setPrimitiveLetterTypeValue:(int16_t)value_;




- (NSDate*)primitiveRandomBeginDate;
- (void)setPrimitiveRandomBeginDate:(NSDate*)value;




- (NSDate*)primitiveRandomEndDate;
- (void)setPrimitiveRandomEndDate:(NSDate*)value;




- (NSDate*)primitiveSendDate;
- (void)setPrimitiveSendDate:(NSDate*)value;




- (NSString*)primitiveSendFrom;
- (void)setPrimitiveSendFrom:(NSString*)value;




- (NSString*)primitiveSendTo;
- (void)setPrimitiveSendTo:(NSString*)value;




- (NSNumber*)primitiveSendType;
- (void)setPrimitiveSendType:(NSNumber*)value;

- (int16_t)primitiveSendTypeValue;
- (void)setPrimitiveSendTypeValue:(int16_t)value_;




- (NSString*)primitiveTitle;
- (void)setPrimitiveTitle:(NSString*)value;




@end
