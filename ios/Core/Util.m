//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/util/Util.java
//

#include "JSONArray.h"
#include "JSONObject.h"
#include "Util.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"

@implementation UtilUtil

+ (JSONJSONArray *)asJSONArrayWithJavaLangIterable:(id<JavaLangIterable>)list {
  return UtilUtil_asJSONArrayWithJavaLangIterable_(list);
}

+ (id<JavaUtilList>)asListWithJSONJSONArray:(JSONJSONArray *)array
                           withJavaUtilList:(id<JavaUtilList>)list {
  return UtilUtil_asListWithJSONJSONArray_withJavaUtilList_(array, list);
}

- (instancetype)init {
  return [super init];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "asJSONArrayWithJavaLangIterable:", "asJSONArray", "Lrtdc.core.json.JSONArray;", 0x9, NULL },
    { "asListWithJSONJSONArray:withJavaUtilList:", "asList", "Ljava.util.List;", 0x9, NULL },
    { "init", NULL, NULL, 0x1, NULL },
  };
  static const J2ObjcClassInfo _UtilUtil = { "Util", "rtdc.core.util", NULL, 0x1, 3, methods, 0, NULL, 0, NULL};
  return &_UtilUtil;
}

@end

JSONJSONArray *UtilUtil_asJSONArrayWithJavaLangIterable_(id<JavaLangIterable> list) {
  UtilUtil_init();
  JSONJSONArray *array = [[[JSONJSONArray alloc] init] autorelease];
  for (JSONJSONObject * __strong t in nil_chk(list)) [array putWithId:t];
  return array;
}

id<JavaUtilList> UtilUtil_asListWithJSONJSONArray_withJavaUtilList_(JSONJSONArray *array, id<JavaUtilList> list) {
  UtilUtil_init();
  for (jint i = [((JSONJSONArray *) nil_chk(array)) length] - 2; i >= 0; i--) [((id<JavaUtilList>) nil_chk(list)) addWithId:(JSONJSONObject *) check_class_cast([array getWithInt:i], [JSONJSONObject class])];
  return list;
}
