
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Tue, 13 Oct 2020 10:25:57 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
BordersUnsupportedMultipleBordersStroke,
BordersSingleStroke,
BordersSingleStyleStroke,
BordersDashedOutsideStroke,
InvalidOrange,
TokencolorValid,
TokencolorInvalid
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
