cmd_/home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.o := gcc -Wp,-MD,/home/hensen/openvswitch-2.3.2-modified/datapath/linux/.gso.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/hensen/openvswitch-2.3.2-modified/include -I/home/hensen/openvswitch-2.3.2-modified/datapath/linux/compat -I/home/hensen/openvswitch-2.3.2-modified/datapath/linux/compat/include  -I/usr/src/linux-headers-3.13.0-32-generic/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/usr/src/linux-headers-3.13.0-32-generic/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/usr/src/linux-headers-3.13.0-32-generic/include/uapi -Iinclude/generated/uapi -include /usr/src/linux-headers-3.13.0-32-generic/include/linux/kconfig.h -Iubuntu/include  -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -m64 -mno-mmx -mno-sse -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -fstack-protector -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -pg -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -DVERSION=\"2.3.2\" -I/home/hensen/openvswitch-2.3.2-modified/datapath/linux/.. -I/home/hensen/openvswitch-2.3.2-modified/datapath/linux/.. -g -include /home/hensen/openvswitch-2.3.2-modified/datapath/linux/kcompat.h  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(gso)"  -D"KBUILD_MODNAME=KBUILD_STR(openvswitch)" -c -o /home/hensen/openvswitch-2.3.2-modified/datapath/linux/.tmp_gso.o /home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.c

source_/home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.o := /home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.c

deps_/home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.o := \
  /home/hensen/openvswitch-2.3.2-modified/datapath/linux/kcompat.h \
  include/generated/uapi/linux/version.h \

/home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.o: $(deps_/home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.o)

$(deps_/home/hensen/openvswitch-2.3.2-modified/datapath/linux/gso.o):
