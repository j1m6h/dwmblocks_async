#define CMDLENGTH 45
#define DELIMITER "^c#D1D1D1^ | "

const Block blocks[] = {
        BLOCK("~/.local/bin/sb_volume",         0,      10),
        BLOCK("~/.local/bin/sb_kernel",		0,      1),
	BLOCK("~/.local/bin/sb_pkgs",           60,     2),
        BLOCK("~/.local/bin/sb_memory",         2,      3),
        BLOCK("~/.local/bin/sb_cputemp",        1,      4),
        BLOCK("~/.local/bin/sb_nvmeinfo",       2,      5),
        BLOCK("~/.local/bin/sb_uptime",         60,     6),
        BLOCK("~/.local/bin/sb_date",           1,      7),
};
