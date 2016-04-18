#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59caa4c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1e64fa4, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa5483600, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe1e0aba1, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node) },
	{ 0xdab9e674, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf42ec463, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x66b294d4, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xf808df79, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x15a23205, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x93a7a422, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb30280b6, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3ae1346b, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xecc4a32e, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb773ed6a, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x471bd617, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x65e03578, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf97b61d8, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0xa108467f, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x8b3cbfd1, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x12de81e, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xabd3be92, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb4c7c730, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x5d00f5be, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa9b8c9c7, __VMLINUX_SYMBOL_STR(vxlan_sock_add) },
	{ 0x5bce3370, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0xfe6ab6ff, __VMLINUX_SYMBOL_STR(skb_copy_ubufs) },
	{ 0x5b3a8e4a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9ecf18e, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x49bf462c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x6dd2817d, __VMLINUX_SYMBOL_STR(vxlan_xmit_skb) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x36b7da1e, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe01a2127, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xa1bdce86, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x548ec619, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0x6fe1f286, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xae89676e, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x4c2bc0c6, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x368eb4a6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb6b46bf4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xcdab3abc, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xab2d6c7d, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xb53f84b, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xb01fce, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x5ea51195, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x755c3108, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x217dda13, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x43ad2ee4, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x4ea5d10, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x27a49a93, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x6508ec0b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x1172c8f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd0bfd6dd, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xf79e97a4, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x684798b5, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xee3bee85, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x4d7f3ec, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xa74bc011, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4736c020, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xc25cf0a9, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6f957436, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xba28f934, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x461d5203, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x68565378, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x61fb248a, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa2b5dda6, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x75a28e26, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xba4368ba, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xe2efc359, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x22a1b245, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0xe7722171, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x759c986a, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x9895104d, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xa222c4bd, __VMLINUX_SYMBOL_STR(vxlan_sock_release) },
	{ 0x51c9cda7, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x6cd8c86b, __VMLINUX_SYMBOL_STR(__crc32c_le_combine) },
	{ 0xd3dcab0b, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xfd68405a, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf2bd2e79, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x74ed7fcb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x9a04cb, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xc262dd3a, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x76806fef, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x974cb1a1, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xb9ad07c0, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xe915c436, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x710f297c, __VMLINUX_SYMBOL_STR(__nla_put) },
	{ 0x1ec4eb34, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcrc32c,vxlan,gre";


MODULE_INFO(srcversion, "D98E50ED25414EF888A0825");
