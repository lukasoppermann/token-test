
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Tue, 13 Oct 2020 11:01:47 GMT
//

#import "StyleDictionaryColor.h"


@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
rgba(255, 230, 0, 1),
rgba(112, 141, 242, 1),
rgba(4, 74, 255, 1),
rgba(64, 255, 186, 1),
rgba(255, 128, 64, 1),
rgba(66, 231, 132, 1),
rgba(254, 80, 80, 1)
    ];
  });

  return colorArray;
}

@end
