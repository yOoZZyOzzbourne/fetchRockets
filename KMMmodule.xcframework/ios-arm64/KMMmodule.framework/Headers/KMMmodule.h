#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KMMKotlinUnit, KMMData<__covariant T>, KMMKotlinThrowable, KMMDataError, KMMKotlinNothing, KMMDataSuccess<__covariant T>, KMMDiameter, KMMFirstStage, KMMHeight, KMMMass, KMMSecondStage, KMMRocketDetailsModel, KMMRocketItemCompanion, KMMRocketItem, KMMRocketKMMLineMeasure, KMMRocketKMMWeightScale, KMMRocketKMMStage, KMMRocketKMMCompanion, KMMRocketKMM, KMMRocketKMMLineMeasureCompanion, KMMRocketKMMStageCompanion, KMMRocketKMMWeightScaleCompanion, KMMKotlinArray<T>, KMMKotlinException, KMMKotlinRuntimeException, KMMKotlinIllegalStateException, KMMKotlinx_serialization_coreSerializersModule, KMMKotlinx_serialization_coreSerialKind;

@protocol KMMPlatform, KMMUseCase, KMMSynchronousUseCase, KMMRocketRepository, KMMKotlinx_serialization_coreKSerializer, KMMSuspendUseCase, KMMKotlinSuspendFunction0, KMMKotlinx_serialization_coreEncoder, KMMKotlinx_serialization_coreSerialDescriptor, KMMKotlinx_serialization_coreSerializationStrategy, KMMKotlinx_serialization_coreDecoder, KMMKotlinx_serialization_coreDeserializationStrategy, KMMKotlinFunction, KMMKotlinIterator, KMMKotlinx_serialization_coreCompositeEncoder, KMMKotlinAnnotation, KMMKotlinx_serialization_coreCompositeDecoder, KMMKotlinx_serialization_coreSerializersModuleCollector, KMMKotlinKClass, KMMKotlinKDeclarationContainer, KMMKotlinKAnnotatedElement, KMMKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KMMBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KMMBase (KMMBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KMMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KMMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKMMKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KMMNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KMMByte : KMMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KMMUByte : KMMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KMMShort : KMMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KMMUShort : KMMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KMMInt : KMMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KMMUInt : KMMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KMMLong : KMMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KMMULong : KMMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KMMFloat : KMMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KMMDouble : KMMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KMMBoolean : KMMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface KMMGreeting : KMMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol KMMPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface KMMIOSPlatform : KMMBase <KMMPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("UseCase")))
@protocol KMMUseCase
@required
@end

__attribute__((swift_name("SuspendUseCase")))
@protocol KMMSuspendUseCase <KMMUseCase>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInput:(id _Nullable)input completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(input:completionHandler:)")));
@end

__attribute__((swift_name("SynchronousUseCase")))
@protocol KMMSynchronousUseCase <KMMUseCase>
@required
- (id _Nullable)invokeInput:(id _Nullable)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSelectedRocketIdUseCase")))
@interface KMMGetSelectedRocketIdUseCase : KMMBase <KMMSynchronousUseCase>
- (instancetype)initWithRepository:(id<KMMRocketRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (NSString *)invokeInput:(KMMKotlinUnit *)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((swift_name("RocketRepository")))
@protocol KMMRocketRepository
@required
@property NSString *selectedRocketId __attribute__((swift_name("selectedRocketId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryRocketRepository")))
@interface KMMMemoryRocketRepository : KMMBase <KMMRocketRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *selectedRocketId __attribute__((swift_name("selectedRocketId")));
@end

__attribute__((swift_name("Data")))
@interface KMMData<__covariant T> : KMMBase
- (T _Nullable)getSuccessValueOrThrow __attribute__((swift_name("getSuccessValueOrThrow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataError")))
@interface KMMDataError : KMMData<KMMKotlinNothing *>
- (instancetype)initWithCause:(KMMKotlinThrowable *)cause previousError:(KMMDataError * _Nullable)previousError __attribute__((swift_name("init(cause:previousError:)"))) __attribute__((objc_designated_initializer));
- (KMMDataError *)doCopyCause:(KMMKotlinThrowable *)cause previousError:(KMMDataError * _Nullable)previousError __attribute__((swift_name("doCopy(cause:previousError:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMKotlinThrowable *cause __attribute__((swift_name("cause")));
@property (readonly) KMMDataError * _Nullable previousError __attribute__((swift_name("previousError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataSuccess")))
@interface KMMDataSuccess<__covariant T> : KMMData<T>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (KMMDataSuccess<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Diameter")))
@interface KMMDiameter : KMMBase
- (instancetype)initWithFeet:(int32_t)feet meters:(double)meters __attribute__((swift_name("init(feet:meters:)"))) __attribute__((objc_designated_initializer));
- (KMMDiameter *)doCopyFeet:(int32_t)feet meters:(double)meters __attribute__((swift_name("doCopy(feet:meters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t feet __attribute__((swift_name("feet")));
@property (readonly) double meters __attribute__((swift_name("meters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirstStage")))
@interface KMMFirstStage : KMMBase
- (instancetype)initWithBurn_time_sec:(int32_t)burn_time_sec engines:(int32_t)engines fuel_amount_tons:(int32_t)fuel_amount_tons reusable:(BOOL)reusable __attribute__((swift_name("init(burn_time_sec:engines:fuel_amount_tons:reusable:)"))) __attribute__((objc_designated_initializer));
- (KMMFirstStage *)doCopyBurn_time_sec:(int32_t)burn_time_sec engines:(int32_t)engines fuel_amount_tons:(int32_t)fuel_amount_tons reusable:(BOOL)reusable __attribute__((swift_name("doCopy(burn_time_sec:engines:fuel_amount_tons:reusable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t burn_time_sec __attribute__((swift_name("burn_time_sec")));
@property (readonly) int32_t engines __attribute__((swift_name("engines")));
@property (readonly) int32_t fuel_amount_tons __attribute__((swift_name("fuel_amount_tons")));
@property (readonly) BOOL reusable __attribute__((swift_name("reusable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Height")))
@interface KMMHeight : KMMBase
- (instancetype)initWithFeet:(double)feet meters:(int32_t)meters __attribute__((swift_name("init(feet:meters:)"))) __attribute__((objc_designated_initializer));
- (KMMHeight *)doCopyFeet:(double)feet meters:(int32_t)meters __attribute__((swift_name("doCopy(feet:meters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double feet __attribute__((swift_name("feet")));
@property (readonly) int32_t meters __attribute__((swift_name("meters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mass")))
@interface KMMMass : KMMBase
- (instancetype)initWithKg:(int32_t)kg lb:(int32_t)lb __attribute__((swift_name("init(kg:lb:)"))) __attribute__((objc_designated_initializer));
- (KMMMass *)doCopyKg:(int32_t)kg lb:(int32_t)lb __attribute__((swift_name("doCopy(kg:lb:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t kg __attribute__((swift_name("kg")));
@property (readonly) int32_t lb __attribute__((swift_name("lb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketDetailsModel")))
@interface KMMRocketDetailsModel : KMMBase
- (instancetype)initWithDescription:(NSString * _Nullable)description diameter:(KMMDiameter * _Nullable)diameter first_stage:(KMMFirstStage * _Nullable)first_stage height:(KMMHeight * _Nullable)height id:(int32_t)id mass:(KMMMass * _Nullable)mass rocket_id:(NSString * _Nullable)rocket_id rocket_name:(NSString * _Nullable)rocket_name rocket_type:(NSString * _Nullable)rocket_type second_stage:(KMMSecondStage * _Nullable)second_stage flickr_images:(NSArray<NSString *> *)flickr_images __attribute__((swift_name("init(description:diameter:first_stage:height:id:mass:rocket_id:rocket_name:rocket_type:second_stage:flickr_images:)"))) __attribute__((objc_designated_initializer));
- (KMMRocketDetailsModel *)doCopyDescription:(NSString * _Nullable)description diameter:(KMMDiameter * _Nullable)diameter first_stage:(KMMFirstStage * _Nullable)first_stage height:(KMMHeight * _Nullable)height id:(int32_t)id mass:(KMMMass * _Nullable)mass rocket_id:(NSString * _Nullable)rocket_id rocket_name:(NSString * _Nullable)rocket_name rocket_type:(NSString * _Nullable)rocket_type second_stage:(KMMSecondStage * _Nullable)second_stage flickr_images:(NSArray<NSString *> *)flickr_images __attribute__((swift_name("doCopy(description:diameter:first_stage:height:id:mass:rocket_id:rocket_name:rocket_type:second_stage:flickr_images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) KMMDiameter * _Nullable diameter __attribute__((swift_name("diameter")));
@property (readonly) KMMFirstStage * _Nullable first_stage __attribute__((swift_name("first_stage")));
@property (readonly) NSArray<NSString *> *flickr_images __attribute__((swift_name("flickr_images")));
@property (readonly) KMMHeight * _Nullable height __attribute__((swift_name("height")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) KMMMass * _Nullable mass __attribute__((swift_name("mass")));
@property (readonly) NSString * _Nullable rocket_id __attribute__((swift_name("rocket_id")));
@property (readonly) NSString * _Nullable rocket_name __attribute__((swift_name("rocket_name")));
@property (readonly) NSString * _Nullable rocket_type __attribute__((swift_name("rocket_type")));
@property (readonly) KMMSecondStage * _Nullable second_stage __attribute__((swift_name("second_stage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SecondStage")))
@interface KMMSecondStage : KMMBase
- (instancetype)initWithBurn_time_sec:(int32_t)burn_time_sec engines:(int32_t)engines fuel_amount_tons:(int32_t)fuel_amount_tons reusable:(BOOL)reusable __attribute__((swift_name("init(burn_time_sec:engines:fuel_amount_tons:reusable:)"))) __attribute__((objc_designated_initializer));
- (KMMSecondStage *)doCopyBurn_time_sec:(int32_t)burn_time_sec engines:(int32_t)engines fuel_amount_tons:(int32_t)fuel_amount_tons reusable:(BOOL)reusable __attribute__((swift_name("doCopy(burn_time_sec:engines:fuel_amount_tons:reusable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t burn_time_sec __attribute__((swift_name("burn_time_sec")));
@property (readonly) int32_t engines __attribute__((swift_name("engines")));
@property (readonly) int32_t fuel_amount_tons __attribute__((swift_name("fuel_amount_tons")));
@property (readonly) BOOL reusable __attribute__((swift_name("reusable")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketItem")))
@interface KMMRocketItem : KMMBase
- (instancetype)initWithRocketID:(NSString * _Nullable)rocketID firstFlight:(NSString * _Nullable)firstFlight rocketName:(NSString * _Nullable)rocketName __attribute__((swift_name("init(rocketID:firstFlight:rocketName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMRocketItemCompanion *companion __attribute__((swift_name("companion")));
- (KMMRocketItem *)doCopyRocketID:(NSString * _Nullable)rocketID firstFlight:(NSString * _Nullable)firstFlight rocketName:(NSString * _Nullable)rocketName __attribute__((swift_name("doCopy(rocketID:firstFlight:rocketName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable firstFlight __attribute__((swift_name("firstFlight")));
@property (readonly) NSString * _Nullable rocketID __attribute__((swift_name("rocketID")));
@property (readonly) NSString * _Nullable rocketName __attribute__((swift_name("rocketName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketItem.Companion")))
@interface KMMRocketItemCompanion : KMMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMRocketItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM")))
@interface KMMRocketKMM : KMMBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name overview:(NSString *)overview height:(KMMRocketKMMLineMeasure *)height diameter:(KMMRocketKMMLineMeasure *)diameter mass:(KMMRocketKMMWeightScale *)mass firstStage:(KMMRocketKMMStage *)firstStage secondStage:(KMMRocketKMMStage *)secondStage firstFlight:(NSString *)firstFlight photos:(NSArray<NSString *> *)photos __attribute__((swift_name("init(id:name:overview:height:diameter:mass:firstStage:secondStage:firstFlight:photos:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMRocketKMMCompanion *companion __attribute__((swift_name("companion")));
- (KMMRocketKMM *)doCopyId:(NSString *)id name:(NSString *)name overview:(NSString *)overview height:(KMMRocketKMMLineMeasure *)height diameter:(KMMRocketKMMLineMeasure *)diameter mass:(KMMRocketKMMWeightScale *)mass firstStage:(KMMRocketKMMStage *)firstStage secondStage:(KMMRocketKMMStage *)secondStage firstFlight:(NSString *)firstFlight photos:(NSArray<NSString *> *)photos __attribute__((swift_name("doCopy(id:name:overview:height:diameter:mass:firstStage:secondStage:firstFlight:photos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMRocketKMMLineMeasure *diameter __attribute__((swift_name("diameter")));
@property (readonly) NSString *firstFlight __attribute__((swift_name("firstFlight")));
@property (readonly) KMMRocketKMMStage *firstStage __attribute__((swift_name("firstStage")));
@property (readonly) KMMRocketKMMLineMeasure *height __attribute__((swift_name("height")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) KMMRocketKMMWeightScale *mass __attribute__((swift_name("mass")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *overview __attribute__((swift_name("overview")));
@property (readonly) NSArray<NSString *> *photos __attribute__((swift_name("photos")));
@property (readonly) KMMRocketKMMStage *secondStage __attribute__((swift_name("secondStage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.Companion")))
@interface KMMRocketKMMCompanion : KMMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMRocketKMMCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.LineMeasure")))
@interface KMMRocketKMMLineMeasure : KMMBase
- (instancetype)initWithMeters:(float)meters feet:(float)feet __attribute__((swift_name("init(meters:feet:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMRocketKMMLineMeasureCompanion *companion __attribute__((swift_name("companion")));
- (KMMRocketKMMLineMeasure *)doCopyMeters:(float)meters feet:(float)feet __attribute__((swift_name("doCopy(meters:feet:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float feet __attribute__((swift_name("feet")));
@property (readonly) float meters __attribute__((swift_name("meters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.LineMeasureCompanion")))
@interface KMMRocketKMMLineMeasureCompanion : KMMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMRocketKMMLineMeasureCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.Stage")))
@interface KMMRocketKMMStage : KMMBase
- (instancetype)initWithReusable:(BOOL)reusable engines:(int32_t)engines fuelMass:(float)fuelMass burnTime:(KMMInt * _Nullable)burnTime __attribute__((swift_name("init(reusable:engines:fuelMass:burnTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMRocketKMMStageCompanion *companion __attribute__((swift_name("companion")));
- (KMMRocketKMMStage *)doCopyReusable:(BOOL)reusable engines:(int32_t)engines fuelMass:(float)fuelMass burnTime:(KMMInt * _Nullable)burnTime __attribute__((swift_name("doCopy(reusable:engines:fuelMass:burnTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMInt * _Nullable burnTime __attribute__((swift_name("burnTime")));
@property (readonly) int32_t engines __attribute__((swift_name("engines")));
@property (readonly) float fuelMass __attribute__((swift_name("fuelMass")));
@property (readonly) BOOL reusable __attribute__((swift_name("reusable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.StageCompanion")))
@interface KMMRocketKMMStageCompanion : KMMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMRocketKMMStageCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.WeightScale")))
@interface KMMRocketKMMWeightScale : KMMBase
- (instancetype)initWithKilograms:(float)kilograms pounds:(float)pounds __attribute__((swift_name("init(kilograms:pounds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMRocketKMMWeightScaleCompanion *companion __attribute__((swift_name("companion")));
- (KMMRocketKMMWeightScale *)doCopyKilograms:(float)kilograms pounds:(float)pounds __attribute__((swift_name("doCopy(kilograms:pounds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float kilograms __attribute__((swift_name("kilograms")));
@property (readonly) float pounds __attribute__((swift_name("pounds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketKMM.WeightScaleCompanion")))
@interface KMMRocketKMMWeightScaleCompanion : KMMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMRocketKMMWeightScaleCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketApi")))
@interface KMMRocketApi : KMMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchAllRocketsWithCompletionHandler:(void (^)(NSArray<KMMRocketKMM *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchAllRockets(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchRocketByIdRocketId:(NSString *)rocketId completionHandler:(void (^)(KMMRocketKMM * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchRocketById(rocketId:completionHandler:)")));
- (NSString *)foo __attribute__((swift_name("foo()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface KMMPlatform_iosKt : KMMBase
+ (id<KMMPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCaseKt")))
@interface KMMUseCaseKt : KMMBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)invoke:(id<KMMSuspendUseCase>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(_:completionHandler:)")));
+ (id _Nullable)invoke:(id<KMMSynchronousUseCase>)receiver __attribute__((swift_name("invoke(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataExtensionsKt")))
@interface KMMDataExtensionsKt : KMMBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)safeCallBlock:(id<KMMKotlinSuspendFunction0>)block completionHandler:(void (^)(KMMData<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("safeCall(block:completionHandler:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KMMKotlinThrowable : KMMBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KMMKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KMMKotlinException : KMMKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KMMKotlinRuntimeException : KMMKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KMMKotlinIllegalStateException : KMMKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KMMKotlinCancellationException : KMMKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KMMKotlinUnit : KMMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KMMKotlinNothing : KMMBase
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KMMKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KMMKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KMMKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KMMKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KMMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KMMKotlinx_serialization_coreKSerializer <KMMKotlinx_serialization_coreSerializationStrategy, KMMKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinFunction")))
@protocol KMMKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol KMMKotlinSuspendFunction0 <KMMKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KMMKotlinArray<T> : KMMBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KMMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KMMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KMMKotlinx_serialization_coreEncoder
@required
- (id<KMMKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KMMKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KMMKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KMMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KMMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KMMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KMMKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KMMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KMMKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KMMKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KMMKotlinx_serialization_coreDecoder
@required
- (id<KMMKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KMMKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KMMKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KMMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KMMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KMMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KMMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KMMKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KMMKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KMMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KMMKotlinx_serialization_coreSerializersModule : KMMBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KMMKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KMMKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KMMKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMMKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMMKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KMMKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KMMKotlinx_serialization_coreSerialKind : KMMBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KMMKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KMMKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KMMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KMMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KMMKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KMMKotlinKClass>)kClass provider:(id<KMMKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KMMKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KMMKotlinKClass>)kClass serializer:(id<KMMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KMMKotlinKClass>)baseClass actualClass:(id<KMMKotlinKClass>)actualClass actualSerializer:(id<KMMKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KMMKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KMMKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KMMKotlinKClass>)baseClass defaultSerializerProvider:(id<KMMKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KMMKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KMMKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KMMKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KMMKotlinKClass <KMMKotlinKDeclarationContainer, KMMKotlinKAnnotatedElement, KMMKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
