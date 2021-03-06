#ifndef ARCH_MIPS64_H
#define ARCH_MIPS64_H

#define ARCH	(arch_mips)

#ifndef __NR_ioprio_set
#define __NR_ioprio_set		314
#define __NR_ioprio_get		315
#endif

#ifndef __NR_fadvise64
#define __NR_fadvise64		215
#endif

#ifndef __NR_sys_splice
#define __NR_sys_splice		263
#define __NR_sys_tee		265
#define __NR_sys_vmsplice	266
#endif

#define read_barrier()		__asm__ __volatile__("": : :"memory")
#define write_barrier()		__asm__ __volatile__("": : :"memory")
#define nop			__asm__ __volatile__("": : :"memory")

#endif
