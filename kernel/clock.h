#ifndef __CLOCK_H__
#define __CLOCK_H__

#include "kernel.h"
#include "arch_clock.h"

_PROTOTYPE(int boot_cpu_init_timer, (unsigned freq));
_PROTOTYPE(int app_cpu_init_timer, (unsigned freq));

_PROTOTYPE(int timer_int_handler, (void));

_PROTOTYPE(int arch_init_local_timer, (unsigned freq));
/* sto p the local timer ticking */
_PROTOTYPE(void arch_stop_local_timer, (void));
/* let the time tick again with the original settings after it was stopped */
_PROTOTYPE(void arch_restart_local_timer, (void));
_PROTOTYPE(int arch_register_local_timer_handler, (irq_handler_t handler));

_PROTOTYPE( u64_t ms_2_cpu_time, (unsigned ms));

#endif /* __CLOCK_H__ */
