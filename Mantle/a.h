@import Foundation;

// Unlike import, include does not have the same file load guard, so you can reproduce errors in a pseudo manner.
#include "b.h"
#include "c.h"

@interface NSObject (A)
@end
