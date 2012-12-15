#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	typedef void (*_run_signal_t)(void * nFun);
	__funapi void __signal_initialize(__signal * nSignal);
	__funapi void __signal_push_back(__signal * nSignal, void * nData);
	__funapi void __signal_run(__signal * nSignal, _run_signal_t nRunSignal);
	__funapi void __signal_remove(__signal * nSignal, void * nData);
	__funapi void __signal_uninitialized(__signal * nSignal);

#ifdef __cplusplus
}
#endif
