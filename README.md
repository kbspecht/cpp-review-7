# cpp-review-7

Scope is where identifiers can be accessed (in scope if it can be/out of scope if it can't), linkage is whether declaration of same identifier in different scope refers to same object/function (has linkage if so/doesn't if not)
Compound statement/block is group of statements treated by compiler as single statement, enclosed in brackets, can be nested
Use :: to access things in namespaces, can define namespace to create different contexts for program, using :: without namespace name uses global namespace, can use forward declarations within namespace, can use namespace declarations across multiple files (headers or regular files)/all considered part of same namespace, can also nest namespaces with outer::inner::, can make alias for namesapce with namespace alias = name, use for any code distributed to others to prevent conflicts (usually single top level namespace enough, 2/3 levels for multiple teams)
Local variables have scope until end of block they're declared in (after that destroyed), all variable names declared in scope must be unique, also have no linkage, limit scope of local variables to block they're used in
Global variables declared at top of file in global namespace, are visible from point of declaration until end of file, can also be defined in user namespace, have static duration (created when program starts before main() execution/destroyed when it ends, static variables), can use g_ to indicate if desired, should generally make const
Shadowing is when local variable from outer block is hidden due to local variable from inner block having same name, can also do with global variable/local variable, should avoid since it can lead to errors
