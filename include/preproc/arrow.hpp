/*
 * Deduplicates the repetition required for defining the body, noexcept specifier, and requires clause of a template function consisting of a single expression.
 * (i.e. eliminates annoying typing when defining forwarding function templates.)
 */

#	define AXM_ARROW(...) \
		noexcept __VA_OPT__((noexcept(__VA_ARGS__)) \
		-> decltype(auto) \
		requires(requires { __VA_ARGS__; })) \
		{ __VA_OPT__(return (__VA_ARGS__);) }
