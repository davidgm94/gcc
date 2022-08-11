#undef TARGET_RNU
#define TARGET_RNU 1

#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS() \
	do {                                \
		builtin_define ("__rnu__");      \
		builtin_define ("__unix__");      \
		builtin_assert ("system=rnu");   \
		builtin_assert ("system=unix");   \
		builtin_assert ("system=posix");   \
	} while(0);
