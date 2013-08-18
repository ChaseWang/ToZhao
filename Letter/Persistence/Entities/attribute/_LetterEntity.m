// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LetterEntity.m instead.

#import "_LetterEntity.h"

const struct LetterEntityAttributes LetterEntityAttributes = {
	.content = @"content",
	.createDate = @"createDate",
	.isPublic = @"isPublic",
	.isRandomReceiver = @"isRandomReceiver",
	.letterType = @"letterType",
	.randomBeginDate = @"randomBeginDate",
	.randomEndDate = @"randomEndDate",
	.sendDate = @"sendDate",
	.sendFrom = @"sendFrom",
	.sendTo = @"sendTo",
	.sendType = @"sendType",
	.title = @"title",
};

const struct LetterEntityRelationships LetterEntityRelationships = {
};

const struct LetterEntityFetchedProperties LetterEntityFetchedProperties = {
};

@implementation LetterEntityID
@end

@implementation _LetterEntity

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"LetterEntity" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"LetterEntity";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"LetterEntity" inManagedObjectContext:moc_];
}

- (LetterEntityID*)objectID {
	return (LetterEntityID*)[super objectID];
}

+ (NSSet *)keyPathsForValuesAffectingValueForKey:(NSString *)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	
	if ([key isEqualToString:@"isPublicValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"isPublic"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
	}
	if ([key isEqualToString:@"isRandomReceiverValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"isRandomReceiver"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
	}
	if ([key isEqualToString:@"letterTypeValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"letterType"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
	}
	if ([key isEqualToString:@"sendTypeValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"sendType"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
	}

	return keyPaths;
}




@dynamic content;






@dynamic createDate;






@dynamic isPublic;



- (BOOL)isPublicValue {
	NSNumber *result = [self isPublic];
	return [result boolValue];
}

- (void)setIsPublicValue:(BOOL)value_ {
	[self setIsPublic:[NSNumber numberWithBool:value_]];
}

- (BOOL)primitiveIsPublicValue {
	NSNumber *result = [self primitiveIsPublic];
	return [result boolValue];
}

- (void)setPrimitiveIsPublicValue:(BOOL)value_ {
	[self setPrimitiveIsPublic:[NSNumber numberWithBool:value_]];
}





@dynamic isRandomReceiver;



- (BOOL)isRandomReceiverValue {
	NSNumber *result = [self isRandomReceiver];
	return [result boolValue];
}

- (void)setIsRandomReceiverValue:(BOOL)value_ {
	[self setIsRandomReceiver:[NSNumber numberWithBool:value_]];
}

- (BOOL)primitiveIsRandomReceiverValue {
	NSNumber *result = [self primitiveIsRandomReceiver];
	return [result boolValue];
}

- (void)setPrimitiveIsRandomReceiverValue:(BOOL)value_ {
	[self setPrimitiveIsRandomReceiver:[NSNumber numberWithBool:value_]];
}





@dynamic letterType;



- (int16_t)letterTypeValue {
	NSNumber *result = [self letterType];
	return [result shortValue];
}

- (void)setLetterTypeValue:(int16_t)value_ {
	[self setLetterType:[NSNumber numberWithShort:value_]];
}

- (int16_t)primitiveLetterTypeValue {
	NSNumber *result = [self primitiveLetterType];
	return [result shortValue];
}

- (void)setPrimitiveLetterTypeValue:(int16_t)value_ {
	[self setPrimitiveLetterType:[NSNumber numberWithShort:value_]];
}





@dynamic randomBeginDate;






@dynamic randomEndDate;






@dynamic sendDate;






@dynamic sendFrom;






@dynamic sendTo;






@dynamic sendType;



- (int16_t)sendTypeValue {
	NSNumber *result = [self sendType];
	return [result shortValue];
}

- (void)setSendTypeValue:(int16_t)value_ {
	[self setSendType:[NSNumber numberWithShort:value_]];
}

- (int16_t)primitiveSendTypeValue {
	NSNumber *result = [self primitiveSendType];
	return [result shortValue];
}

- (void)setPrimitiveSendTypeValue:(int16_t)value_ {
	[self setPrimitiveSendType:[NSNumber numberWithShort:value_]];
}





@dynamic title;











@end
