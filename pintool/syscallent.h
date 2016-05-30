	{ 3,	LG|TD,	SYS_read,		"read"		},  /* 0 */
	{ 3,	LG|TD,	SYS_write,		"write"		},  /* 1 */
	{ 3,	P1|LG|TD|TF,	SYS_open,		"open"		},  /* 2 */
	{ 1,	LG|TD,	SYS_close,		"close"		},  /* 3 */
	{ 2,	TF,	SYS_stat,		"stat"		},  /* 4 */
	{ 2,	TD,	SYS_fstat,		"fstat"		},  /* 5 */
	{ 2,	TF,	SYS_lstat,		"lstat"		},  /* 6 */
	{ 3,	TD,	SYS_poll,		"poll"		},  /* 7 */
	{ 3,	TD,	SYS_lseek,		"lseek"		},  /* 8 */
	{ 6,	TD|TM,	SYS_mmap,		"mmap"		},  /* 9 */
	{ 3,	TM,	SYS_mprotect,		"mprotect"	},  /* 10 */
	{ 2,	TM,	SYS_munmap,		"munmap"	},  /* 11 */
	{ 1,	TM,	SYS_brk,		"brk"		},  /* 12 */
	{ 4,	TS,	SYS_rt_sigaction,	"rt_sigaction"	},  /* 13 */
	{ 4,	TS,	SYS_rt_sigprocmask,	"rt_sigprocmask"},  /* 14 */
	{ 0,	TS,	SYS_rt_sigreturn,	"rt_sigreturn"	},  /* 15 */
	{ 3,	TD,	SYS_ioctl,		"ioctl"		},  /* 16 */
	{ 4,	LG|TD,	SYS_pread64,		"pread"		},  /* 17 */
	{ 4,	LG|TD,	SYS_pwrite64,		"pwrite"	},  /* 18 */
	{ 3,	LG|TD,	SYS_readv,		"readv"		},  /* 19 */
	{ 3,	LG|TD,	SYS_writev,		"writev"	},  /* 20 */
	{ 2,	TF,	SYS_access,		"access"	},  /* 21 */
	{ 1,	LG|TD,	SYS_pipe,		"pipe"		},  /* 22 */
	{ 5,	TD,	SYS_select,		"select"	},  /* 23 */
	{ 0,	0,	SYS_sched_yield,	"sched_yield"	},  /* 24 */
	{ 5,	TM,	SYS_mremap,		"mremap"	},  /* 25 */
	{ 3,	TM,	SYS_msync,		"msync"		},  /* 26 */
	{ 3,	TM,	SYS_mincore,		"mincore"	},  /* 27 */
	{ 3,	TM,	SYS_madvise,		"madvise"	},  /* 28 */
	{ 4,	TI,	SYS_shmget,		"shmget"	},  /* 29 */
	{ 4,	TI,	SYS_shmat,		"shmat"		},  /* 30 */
	{ 4,	TI,	SYS_shmctl,		"shmctl"	},  /* 31 */
	{ 1,	LG|TD,	SYS_dup,		"dup"		},  /* 32 */
	{ 2,	LG|TD,	SYS_dup2,		"dup2"		},  /* 33 */
	{ 0,	TS,	SYS_pause,		"pause"		},  /* 34 */
	{ 2,	0,	SYS_nanosleep,		"nanosleep"	},  /* 35 */
	{ 2,	0,	SYS_getitimer,		"getitimer"	},  /* 36 */
	{ 1,	0,	SYS_alarm,		"alarm"		},  /* 37 */
	{ 3,	0,	SYS_setitimer,		"setitimer"	},  /* 38 */
	{ 0,	0,	SYS_getpid,		"getpid"	},  /* 39 */
	{ 4,	LG|TD|TN,	SYS_sendfile,		"sendfile"	},  /* 40 */
	{ 3,	LG|TN,	SYS_socket,		"socket"	},  /* 41 */
	{ 3,	LG|TN,	SYS_connect,		"connect"	},  /* 42 */
	{ 3,	LG|TN,	SYS_accept,		"accept"	},  /* 43 */
	{ 6,	LG|TN,	SYS_sendto,		"sendto"	},  /* 44 */
	{ 6,	LG|TN,	SYS_recvfrom,		"recvfrom"	},  /* 45 */
	{ 3,	LG|TN,	SYS_sendmsg,		"sendmsg"	},  /* 46 */
	{ 3,	LG|TN,	SYS_recvmsg,		"recvmsg"	},  /* 47 */
	{ 2,	TN,	SYS_shutdown,		"shutdown"	},  /* 48 */
	{ 3,	LG|TN,	SYS_bind,		"bind"		},  /* 49 */
	{ 2,	LG|TN,	SYS_listen,		"listen"	},  /* 50 */
	{ 3,	TN,	SYS_getsockname,	"getsockname"	},  /* 51 */
	{ 3,	TN,	SYS_getpeername,	"getpeername"	},  /* 52 */
	{ 4,	LG|TN,	SYS_socketpair,		"socketpair"	},  /* 53 */
	{ 5,	TN,	SYS_setsockopt,		"setsockopt"	},  /* 54 */
	{ 5,	TN,	SYS_getsockopt,		"getsockopt"	},  /* 55 */
	{ 5,	LG|TP,	SYS_clone,		"clone"		},  /* 56 */
	{ 0,	LG|TP,	SYS_fork,		"fork"		},  /* 57 */
	{ 0,	LG|TP,	SYS_vfork,		"vfork"		},  /* 58 */
	{ 3,	LG|TF|TP,	SYS_execve,		"execve"	},  /* 59 */
	{ 1,	TP,	SYS_exit,		"_exit"		},  /* 60 */
	{ 4,	TP,	SYS_wait4,		"wait4"		},  /* 61 */
	{ 2,	LG|TS,	SYS_kill,		"kill"		},  /* 62 */
	{ 1,	0,	SYS_uname,		"uname"		},  /* 63 */
	{ 4,	TI,	SYS_semget,		"semget"	},  /* 64 */
	{ 4,	TI,	SYS_semop,		"semop"		},  /* 65 */
	{ 4,	TI,	SYS_semctl,		"semctl"	},  /* 66 */
	{ 4,	TI,	SYS_shmdt,		"shmdt"		},  /* 67 */
	{ 4,	TI,	SYS_msgget,		"msgget"	},  /* 68 */
	{ 4,	TI,	SYS_msgsnd,		"msgsnd"	},  /* 69 */
	{ 5,	TI,	SYS_msgrcv,		"msgrcv"	},  /* 70 */
	{ 3,	TI,	SYS_msgctl,		"msgctl"	},  /* 71 */
	{ 3,	TD,	SYS_fcntl,		"fcntl"		},  /* 72 */
	{ 2,	TD,	SYS_flock,		"flock"		},  /* 73 */
	{ 1,	TD,	SYS_fsync,		"fsync"		},  /* 74 */
	{ 1,	TD,	SYS_fdatasync,		"fdatasync"	},  /* 75 */
	{ 2,	P1|LG|TF,	SYS_truncate,		"truncate"	},  /* 76 */
	{ 2,	LG|TD,	SYS_ftruncate,		"ftruncate"	},  /* 77 */
	{ 3,	TD,	SYS_getdents,		"getdents"	},  /* 78 */
	{ 2,	TF,	SYS_getcwd,		"getcwd"	},  /* 79 */
	{ 1,	TF,	SYS_chdir,		"chdir"		},  /* 80 */
	{ 1,	TD,	SYS_fchdir,		"fchdir"	},  /* 81 */
	{ 2,	P1|P2|LG|TF,	SYS_rename,		"rename"	},  /* 82 */
	{ 2,	P1|LG|TF,	SYS_mkdir,		"mkdir"		},  /* 83 */
	{ 1,	P1|LG|TF,	SYS_rmdir,		"rmdir"		},  /* 84 */
	{ 2,	P1|LG|TD|TF,	SYS_creat,		"creat"		},  /* 85 */
	{ 2,	P1|P2|LG|TF,	SYS_link,		"link"		},  /* 86 */
	{ 1,	P1|LG|TF,	SYS_unlink,		"unlink"	},  /* 87 */
	{ 2,	P1|P2|LG|TF,	SYS_symlink,		"symlink"	},  /* 88 */
	{ 3,	TF,	SYS_readlink,		"readlink"	},  /* 89 */
	{ 2,	TF,	SYS_chmod,		"chmod"		},  /* 90 */
	{ 2,	TD,	SYS_fchmod,		"fchmod"	},  /* 91 */
	{ 3,	TF,	SYS_chown,		"chown"		},  /* 92 */
	{ 3,	TD,	SYS_fchown,		"fchown"	},  /* 93 */
	{ 3,	TF,	SYS_chown,		"lchown"	},  /* 94 */
	{ 1,	0,	SYS_umask,		"umask"		},  /* 95 */
	{ 2,	0,	SYS_gettimeofday,	"gettimeofday"	},  /* 96 */
	{ 2,	0,	SYS_getrlimit,		"getrlimit"	},  /* 97 */
	{ 2,	0,	SYS_getrusage,		"getrusage"	},  /* 98 */
	{ 1,	0,	SYS_sysinfo,		"sysinfo"	},  /* 99 */
	{ 1,	0,	SYS_times,		"times"		},  /* 100 */
	{ 4,	0,	SYS_ptrace,		"ptrace"	},  /* 101 */
	{ 0,	NF,	SYS_getuid,		"getuid"	},  /* 102 */
	{ 3,	0,	SYS_syslog,		"syslog"	},  /* 103 */
	{ 0,	NF,	SYS_getgid,		"getgid"	},  /* 104 */
	{ 1,	0,	SYS_setuid,		"setuid"	},  /* 105 */
	{ 1,	0,	SYS_setgid,		"setgid"	},  /* 106 */
	{ 0,	NF,	SYS_geteuid,		"geteuid"	},  /* 107 */
	{ 0,	NF,	SYS_getegid,		"getegid"	},  /* 108 */
	{ 2,	0,	SYS_setpgid,		"setpgid"	},  /* 109 */
	{ 0,	0,	SYS_getppid,		"getppid"	},  /* 110 */
	{ 0,	0,	SYS_getpgrp,		"getpgrp"	},  /* 111 */
	{ 0,	0,	SYS_setsid,		"setsid"	},  /* 112 */
	{ 2,	0,	SYS_setreuid,		"setreuid"	},  /* 113 */
	{ 2,	0,	SYS_setregid,		"setregid"	},  /* 114 */
	{ 2,	0,	SYS_getgroups,		"getgroups"	},  /* 115 */
	{ 2,	0,	SYS_setgroups,		"setgroups"	},  /* 116 */
	{ 3,	0,	SYS_setresuid,		"setresuid"	},  /* 117 */
	{ 3,	0,	SYS_getresuid,		"getresuid"	},  /* 118 */
	{ 3,	0,	SYS_setresgid,		"setresgid"	},  /* 119 */
	{ 3,	0,	SYS_getresgid,		"getresgid"	},  /* 120 */
	{ 1,	0,	SYS_getpgid,		"getpgid"	},  /* 121 */
	{ 1,	NF,	SYS_setfsuid,		"setfsuid"	},  /* 122 */
	{ 1,	NF,	SYS_setfsgid,		"setfsgid"	},  /* 123 */
	{ 1,	0,	SYS_getsid,		"getsid"	},  /* 124 */
	{ 2,	0,	SYS_capget,		"capget"	},  /* 125 */
	{ 2,	0,	SYS_capset,		"capset"	},  /* 126 */
	{ 2,	TS,	SYS_rt_sigpending,	"rt_sigpending"	},  /* 127 */
	{ 4,	TS,	SYS_rt_sigtimedwait,	"rt_sigtimedwait"	},  /* 128 */
	{ 3,	TS,	SYS_rt_sigqueueinfo,    "rt_sigqueueinfo"	},  /* 129 */
	{ 2,	TS,	SYS_rt_sigsuspend,	"rt_sigsuspend"	},  /* 130 */
	{ 2,	TS,	SYS_sigaltstack,	"sigaltstack"	},  /* 131 */
	{ 2,	TF,	SYS_utime,		"utime"		},  /* 132 */
	{ 3,	TF,	SYS_mknod,		"mknod"		},  /* 133 */
	{ 1,	TF,	SYS_uselib,		"uselib"	},  /* 134 */
	{ 1,	0,	SYS_personality,	"personality"	},  /* 135 */
	{ 2,	0,	SYS_ustat,		"ustat"		},  /* 136 */
	{ 2,	TF,	SYS_statfs,		"statfs"	},  /* 137 */
	{ 2,	TD,	SYS_fstatfs,		"fstatfs"	},  /* 138 */
	{ 3,	0,	SYS_sysfs,		"sysfs"		},  /* 139 */
	{ 2,	0,	SYS_getpriority,	"getpriority"	},  /* 140 */
	{ 3,	0,	SYS_setpriority,	"setpriority"	},  /* 141 */
	{ 0,	0,	SYS_sched_setparam,	"sched_setparam"	},  /* 142 */
	{ 2,	0,	SYS_sched_getparam,	"sched_getparam"	},  /* 143 */
	{ 3,	0,	SYS_sched_setscheduler,	"sched_setscheduler"	},  /* 144 */
	{ 1,	0,	SYS_sched_getscheduler,	"sched_getscheduler"	},  /* 145 */
	{ 1,	0,	SYS_sched_get_priority_max,	"sched_get_priority_max"	},  /* 146 */
	{ 1,	0,	SYS_sched_get_priority_min,	"sched_get_priority_min"	},  /* 147 */
	{ 2,	0,	SYS_sched_rr_get_interval,	"sched_rr_get_interval"	},  /* 148 */
	{ 2,	TM,	SYS_mlock,		"mlock"		},  /* 149 */
	{ 2,	TM,	SYS_munlock,		"munlock"	},  /* 150 */
	{ 1,	TM,	SYS_mlockall,		"mlockall"	},  /* 151 */
	{ 0,	TM,	SYS_munlockall,		"munlockall"	},  /* 152 */
	{ 0,	0,	SYS_vhangup,		"vhangup"	},  /* 153 */
	{ 3,	0,	SYS_modify_ldt,		"modify_ldt"	},  /* 154 */
	{ 2,	TF,	155,		"pivot_root"	},  /* 155 */
	{ 1,	0,	SYS__sysctl,		"_sysctl"	},  /* 156 */
	{ 5,	0,	SYS_prctl,		"prctl"		},  /* 157 */
	{ 2,	TP,	SYS_arch_prctl,		"arch_prctl"	},  /* 158 */
	{ 1,	0,	SYS_adjtimex,		"adjtimex"	},  /* 159 */
	{ 2,	0,	SYS_setrlimit,		"setrlimit"	},  /* 160 */
	{ 1,	TF,	SYS_chroot,		"chroot"	},  /* 161 */
	{ 0,	0,	SYS_sync,		"sync"		},  /* 162 */
	{ 1,	TF,	SYS_acct,		"acct"		},  /* 163 */
	{ 2,	0,	SYS_settimeofday,	"settimeofday"	},  /* 164 */
	{ 5,	TF,	SYS_mount,		"mount"		},  /* 165 */
	{ 2,	TF,	SYS_umount2,		"umount"	}, /* 166 */
	{ 2,	TF,	SYS_swapon,		"swapon"	},  /* 167 */
	{ 1,	TF,	SYS_swapoff,		"swapoff"	},  /* 168 */
	{ 4,	0,	SYS_reboot,		"reboot"	},  /* 169 */
	{ 2,	0,	SYS_sethostname,	"sethostname"	},  /* 170 */
	{ 2,	0,	SYS_setdomainname,	"setdomainname"	},  /* 171 */
	{ 1,	0,	SYS_iopl,		"iopl"		},  /* 172 */
	{ 3,	0,	SYS_ioperm,		"ioperm"	},  /* 173 */
	{ 2,	0,	SYS_create_module,	"create_module"	},  /* 174 */
	{ 3,	0,	SYS_init_module,	"init_module"	},  /* 175 */
	{ 2,	0,	SYS_delete_module,	"delete_module"	},  /* 176 */
	{ 1,	0,	SYS_get_kernel_syms,	"get_kernel_syms"},  /* 177 */
	{ 5,	0,	SYS_query_module,	"query_module"	},  /* 178 */
	{ 4,	TF,	SYS_quotactl,		"quotactl"	},  /* 179 */
	{ 3,	0,	SYS_nfsservctl,		"nfsservctl"	},  /* 180 */
	{ 5,	0,	SYS_getpmsg,		"getpmsg"	}, /* 181 */
	{ 5,	0,	SYS_putpmsg,		"putpmsg"	}, /* 182 */
	{ 5,	0,	SYS_afs_syscall,	"afs_syscall"	},  /* 183 */
	{ 3,	0,	SYS_tuxcall,		"tuxcall"	}, /* 184 */
	{ 3,	0,	SYS_security,		"security"	}, /* 185 */
	{ 0,	0,	SYS_gettid,		"gettid"	}, /* 186 */
	{ 3,	TD,	SYS_readahead,		"readahead"	}, /* 187 */
	{ 5,	TF,	SYS_setxattr,		"setxattr"	}, /* 188 */
	{ 5,	TF,	SYS_setxattr,		"lsetxattr"	}, /* 189 */
	{ 5,	TD,	SYS_fsetxattr,		"fsetxattr"	}, /* 190 */
	{ 4,	TF,	SYS_getxattr,		"getxattr"	}, /* 191 */
	{ 4,	TF,	SYS_getxattr,		"lgetxattr"	}, /* 192 */
	{ 4,	TD,	SYS_fgetxattr,		"fgetxattr"	}, /* 193 */
	{ 3,	TF,	SYS_listxattr,		"listxattr"	}, /* 194 */
	{ 3,	TF,	SYS_listxattr,		"llistxattr"	}, /* 195 */
	{ 3,	TD,	SYS_flistxattr,		"flistxattr"	}, /* 196 */
	{ 2,	TF,	SYS_removexattr,	"removexattr"	}, /* 197 */
	{ 2,	TF,	SYS_removexattr,	"lremovexattr"	}, /* 198 */
	{ 2,	TD,	SYS_fremovexattr,	"fremovexattr"	}, /* 199 */
	{ 2,	TS,	SYS_kill,		"tkill"		}, /* 200 */
	{ 1,	0,	SYS_time,		"time"		},  /* 201 */
	{ 6,	0,	SYS_futex,		"futex"		}, /* 202 */
	{ 3,	0,	SYS_sched_setaffinity,	"sched_setaffinity" },/* 203 */
	{ 3,	0,	SYS_sched_getaffinity,	"sched_getaffinity" },/* 204 */
	{ 1,	0,	SYS_set_thread_area,	"set_thread_area" }, /* 205 */
	{ 2,	0,	SYS_io_setup,		"io_setup"	}, /* 206 */
	{ 1,	0,	SYS_io_destroy,		"io_destroy"	}, /* 207 */
	{ 5,	0,	SYS_io_getevents,	"io_getevents"	}, /* 208 */
	{ 3,	0,	SYS_io_submit,		"io_submit"	}, /* 209 */
	{ 3,	0,	SYS_io_cancel,		"io_cancel"	}, /* 210 */
	{ 1,	0,	SYS_get_thread_area,	"get_thread_area" }, /* 211 */
	{ 3,	0,	SYS_lookup_dcookie,	"lookup_dcookie"}, /* 212 */
	{ 1,	TD,	SYS_epoll_create,	"epoll_create"	}, /* 213 */
	{ 4,	0,	214,		"epoll_ctl_old"	}, /* 214 */
	{ 4,	0,	215,		"epoll_wait_old"}, /* 215 */
	{ 5,	TM,	SYS_remap_file_pages,	"remap_file_pages"}, /* 216 */
	{ 3,	TD,	SYS_getdents64,		"getdents64"	}, /* 217 */
	{ 1,	0,	SYS_set_tid_address,	"set_tid_address"}, /* 218 */
	{ 0,	0,	SYS_restart_syscall,	"restart_syscall"}, /* 219 */
	{ 5,	TI,	SYS_semtimedop,		"semtimedop"	}, /* 220 */
	{ 4,	TD,	SYS_fadvise64,		"fadvise64"	}, /* 221 */
	{ 3,	0,	SYS_timer_create,	"timer_create"	}, /* 222 */
	{ 4,	0,	SYS_timer_settime,	"timer_settime"	}, /* 223 */
	{ 2,	0,	SYS_timer_gettime,	"timer_gettime"	}, /* 224 */
	{ 1,	0,	SYS_timer_getoverrun,	"timer_getoverrun"}, /* 225 */
	{ 1,	0,	SYS_timer_delete,	"timer_delete"	}, /* 226 */
	{ 2,	0,	SYS_clock_settime,	"clock_settime"	}, /* 227 */
	{ 2,	0,	SYS_clock_gettime,	"clock_gettime"	}, /* 228 */
	{ 2,	0,	SYS_clock_getres,	"clock_getres"	}, /* 229 */
	{ 4,	0,	SYS_clock_nanosleep,	"clock_nanosleep"}, /* 230 */
	{ 1,	TP,	SYS_exit,		"exit_group"	}, /* 231 */
	{ 4,	TD,	SYS_epoll_wait,		"epoll_wait"	}, /* 232 */
	{ 4,	TD,	SYS_epoll_ctl,		"epoll_ctl"	}, /* 233 */
	{ 3,	TS,	SYS_tgkill,		"tgkill"	}, /* 234 */
	{ 2,	TF,	SYS_utimes,		"utimes"	}, /* 235 */
	{ 5,	0,	SYS_vserver,		"vserver"	}, /* 236 */
	{ 6,	TM,	SYS_mbind,		"mbind"		}, /* 237 */
	{ 3,	TM,	SYS_set_mempolicy,	"set_mempolicy"	}, /* 238 */
	{ 5,	TM,	SYS_get_mempolicy,	"get_mempolicy"	}, /* 239 */
	{ 4,	0,	SYS_mq_open,		"mq_open"	}, /* 240 */
	{ 1,	0,	SYS_mq_unlink,		"mq_unlink"	}, /* 241 */
	{ 5,	0,	SYS_mq_timedsend,	"mq_timedsend"	}, /* 242 */
	{ 5,	0,	SYS_mq_timedreceive,	"mq_timedreceive" }, /* 243 */
	{ 2,	0,	SYS_mq_notify,		"mq_notify"	}, /* 244 */
	{ 3,	0,	SYS_mq_getsetattr,	"mq_getsetattr"	}, /* 245 */
	{ 4,	0,	SYS_kexec_load,		"kexec_load"	}, /* 246 */
	{ 5,	TP,	SYS_waitid,		"waitid"	}, /* 247 */
	{ 5,	0,	SYS_add_key,		"add_key"	}, /* 248 */
	{ 4,	0,	SYS_request_key,	"request_key"	}, /* 249 */
	{ 5,	0,	SYS_keyctl,		"keyctl"	}, /* 250 */
	{ 3,	0,	SYS_ioprio_set,		"ioprio_set"	}, /* 251 */
	{ 2,	0,	SYS_ioprio_get,		"ioprio_get"	}, /* 252 */
	{ 0,	TD,	SYS_inotify_init,	"inotify_init"	}, /* 253 */
	{ 3,	TD,	SYS_inotify_add_watch,	"inotify_add_watch" }, /* 254 */
	{ 2,	TD,	SYS_inotify_rm_watch,	"inotify_rm_watch" }, /* 255 */
	{ 4,	TM,	SYS_migrate_pages,	"migrate_pages"	}, /* 256 */
	{ 4,	P2|LG|TD|TF,	SYS_openat,		"openat"	}, /* 257 */
	{ 3,	TD|TF,	SYS_mkdirat,		"mkdirat"	}, /* 258 */
	{ 4,	TD|TF,	SYS_mknodat,		"mknodat"	}, /* 259 */
	{ 5,	TD|TF,	SYS_fchownat,		"fchownat"	}, /* 260 */
	{ 3,	TD|TF,	SYS_futimesat,		"futimesat"	}, /* 261 */
	{ 4,	TD|TF,	SYS_newfstatat,		"newfstatat"	}, /* 262 */
	{ 3,	LG|TD|TF,	SYS_unlinkat,		"unlinkat"	}, /* 263 */
	{ 4,	LG|TD|TF,	SYS_renameat,		"renameat"	}, /* 264 */
	{ 5,	LG|TD|TF,	SYS_linkat,		"linkat"	}, /* 265 */
	{ 3,	LG|TD|TF,	SYS_symlinkat,		"symlinkat"	}, /* 266 */
	{ 4,	LG|TD|TF,	SYS_readlinkat,		"readlinkat"	}, /* 267 */
	{ 3,	TD|TF,	SYS_fchmodat,		"fchmodat"	}, /* 268 */
	{ 3,	TD|TF,	SYS_faccessat,		"faccessat"	}, /* 269 */
	{ 6,	TD,	SYS_pselect6,		"pselect6"	}, /* 270 */
	{ 5,	TD,	SYS_ppoll,		"ppoll"		}, /* 271 */
	{ 1,	TP,	SYS_unshare,		"unshare"	}, /* 272 */
	{ 2,	0,	SYS_set_robust_list,	"set_robust_list" }, /* 273 */
	{ 3,	0,	SYS_get_robust_list,	"get_robust_list" }, /* 274 */
	{ 6,	TD,	SYS_splice,		"splice"	}, /* 275 */
	{ 4,	TD,	SYS_tee,		"tee"		}, /* 276 */
	{ 4,	TD,	SYS_sync_file_range,	"sync_file_range" }, /* 277 */
	{ 4,	TD,	SYS_vmsplice,		"vmsplice"	}, /* 278 */
	{ 6,	TM,	SYS_move_pages,		"move_pages"	}, /* 279 */
	{ 4,	TD|TF,	SYS_utimensat,		"utimensat"	}, /* 280 */
	{ 6,	TD,	SYS_epoll_pwait,	"epoll_pwait"	}, /* 281 */
	{ 3,	TD|TS,	SYS_signalfd,		"signalfd"	}, /* 282 */
	{ 2,	TD,	SYS_timerfd_create,	"timerfd_create"}, /* 283 */
	{ 1,	TD,	SYS_eventfd,		"eventfd"	}, /* 284 */
	{ 4,	TD,	SYS_fallocate,		"fallocate"	}, /* 285 */
	{ 4,	TD,	SYS_timerfd_settime,	"timerfd_settime"}, /* 286 */
	{ 2,	TD,	SYS_timerfd_gettime,	"timerfd_gettime"}, /* 287 */
	{ 4,	LG|TN,	SYS_accept4,		"accept4"	}, /* 288 */
	{ 4,	TD|TS,	SYS_signalfd4,		"signalfd4"	}, /* 289 */
	{ 2,	TD,	SYS_eventfd2,		"eventfd2"	}, /* 290 */
	{ 1,	TD,	SYS_epoll_create1,	"epoll_create1"	}, /* 291 */
	{ 3,	LG|TD,	SYS_dup3,		"dup3"		}, /* 292 */
	{ 2,	TD,	SYS_pipe2,		"pipe2"		}, /* 293 */
	{ 1,	TD,	SYS_inotify_init1,	"inotify_init1"	}, /* 294 */
	{ 4,	LG|TD,	SYS_preadv,		"preadv"	}, /* 295 */
	{ 4,	LG|TD,	SYS_pwritev,		"pwritev"	}, /* 296 */
	{ 4,	TP|TS,	SYS_rt_tgsigqueueinfo,	"rt_tgsigqueueinfo"}, /* 297 */
	{ 5,	TD,	SYS_perf_event_open,	"perf_event_open"}, /* 298 */
	{ 5,	TN,	SYS_recvmmsg,		"recvmmsg"	}, /* 299 */
	{ 2,	TD,	SYS_fanotify_init,	"fanotify_init"	}, /* 300 */
	{ 5,	TD|TF,	SYS_fanotify_mark,	"fanotify_mark"	}, /* 301 */
	{ 4,	0,	SYS_prlimit64,		"prlimit64"	}, /* 302 */
	{ 5,	TD|TF,	SYS_name_to_handle_at,	"name_to_handle_at"}, /* 303 */
	{ 3,	TD,	SYS_open_by_handle_at,	"open_by_handle_at"}, /* 304 */
	{ 2,	0,	SYS_clock_adjtime,	"clock_adjtime"	}, /* 305 */
	{ 1,	TD,	SYS_syncfs,		"syncfs"	}, /* 306 */
	{ 4,	TN,	SYS_sendmmsg,		"sendmmsg"	}, /* 307 */
	{ 2,	TD,	SYS_setns,		"setns"		}, /* 308 */
	{ 3,	0,	SYS_getcpu,		"getcpu"	}, /* 309 */
	{ 6,	0,	SYS_process_vm_readv,	"process_vm_readv"	}, /* 310 */
	{ 6,	0,	SYS_process_vm_writev,	"process_vm_writev"	}, /* 311 */
	{ 5,	0,	312,		"kcmp"		}, /* 312 */
	{ 3,	TD,	313,	"finit_module"	}, /* 313 */
	{ 3,	TD,	314,	"BUFFER"	}, /* 314 */
	{ 3,	TD,	315,	"BUFFER"	}, /* 315 */
	{ 3,	TD,	316,	"BUFFER"	}, /* 316 */
	{ 3,	TD,	317,	"BUFFER"	}, /* 317 */
	{ 3,	TD,	318,	"BUFFER"	}, /* 318 */
	{ 3,	TD,	319,	"BUFFER"	}, /* 319 */
	{ 3,	TD,	320,	"BUFFER"	}, /* 320 */
	{ 3,	LG|TM,	321,	"malloc"	}, /* 321 */
	{ 3,	LG|TM,	322,	"calloc"	}, /* 322 */
	{ 3,	LG|TM,	323,	"realloc"	}, /* 323 */
	{ 3,	LG|TM,	324,	"free"	}, /* 324 */
	{ 3,	TM,	325,	"BUFFER"	}, /* 325 */
	{ 3,	TM,	326,	"BUFFER"	}, /* 326 */
	{ 3,	LG|TM,	327,	"memcpy"	}, /* 327 */
	{ 3,	LG|TM,	328,	"memccpy"	}, /* 328 */
	{ 3,	LG|TM,	329,	"memmove"	}, /* 329 */
	{ 3,	TM,	330,	"BUFFER"	}, /* 330 */
	{ 3,	LG|TM,	331,	"strcpy"	}, /* 331 */
	{ 3,	LG|TM,	332,	"strncpy"	}, /* 332 */

