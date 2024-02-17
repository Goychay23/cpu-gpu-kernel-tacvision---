// initrd-cpusegment.c

#include <linux/init.h>
#include <linux/module.h>

static int __init initrd_cpusegment(void) {
    cpuinitrd(CPU_SEGMENT "initr-daemonsubkernel";
    return 0;
}

static void __exit stoping_cpusegment(void) {
   stopcpu(CPU_SEGMENT "stop-cpu-segmentsubkernel"
}

module_init(cpuinitrd);
module_exit(stoping_cpusegment);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("cpuinitrd");
MODULE_DESCRIPTION("subkernelmodulescpuinitrd");
MODULE_VERSION("1.0");
