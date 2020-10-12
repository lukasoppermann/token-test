
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Mon, 12 Oct 2020 19:36:33 GMT
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
