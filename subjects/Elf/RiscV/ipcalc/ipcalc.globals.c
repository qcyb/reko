// ipcalc.globals.c
// Generated by decompiling ipcalc
// using Reko decompiler version 0.9.3.0.

#include "ipcalc.h"

void g_vFFFFFFFF;
byte g_b0000;
int32 g_dw0020;
int32 g_dw0080;
Eq_n g_t0100;
void g_v10880 = ??void??;
void g_v10898 = ??void??;
void g_v108B0 = ??void??;
void g_v108C0 = ??void??;
void g_v108D0 = ??void??;
Eq_n g_t108E0 = 
	{
	};
void g_v10BE0 = ??void??;
void g_v10C00 = ??void??;
void g_v10C38 = ??void??;
void g_v10C88 = ??void??;
void g_v10CC8 = ??void??;
void g_v10D18 = ??void??;
void g_v10D68 = ??void??;
void g_v10D98 = ??void??;
void g_v10DE8 = ??void??;
void g_v10E38 = ??void??;
void g_v10E88 = ??void??;
void g_v10EA0 = ??void??;
void g_v10EE8 = ??void??;
void g_v10F28 = ??void??;
void g_v10F68 = ??void??;
void g_v10FA8 = ??void??;
void g_v10FF8 = ??void??;
void g_v11048 = ??void??;
void g_v11098 = ??void??;
void g_v110C8 = ??void??;
void g_v11118 = ??void??;
void g_v11148 = ??void??;
void g_v11190 = ??void??;
void g_v111D8 = ??void??;
void g_v11228 = ??void??;
void g_v11258 = ??void??;
void g_v11268 = ??void??;
void g_v112C0 = ??void??;
void g_v11300 = ??void??;
void g_v11348 = ??void??;
void g_v11388 = ??void??;
void g_v113C8 = ??void??;
void g_v11408 = ??void??;
void g_v11458 = ??void??;
void g_v11498 = ??void??;
void g_v114E0 = ??void??;
void g_v11530 = ??void??;
void g_v11578 = ??void??;
void g_v115A8 = ??void??;
char g_str115C8[] = "%.2x";
char g_str115D0[] = "/dev/urandom";
void g_v115E0 = ??void??;
Eq_n g_t11780 = 
	{
		0x31,
		0x00,
	};
char g_str11788[] = "ipcalc: bad IPv4 address: %s\n";
char g_str117A8[] = "%s.0";
char g_str117B0[] = "Memory allocation failure line %d\n";
char g_str117D8[] = "ipcalc: bad IPv4 prefix %d\n";
void g_v117F8 = ??void??;
char g_str11830[] = "ipcalc: cannot find hostname for %s";
char g_str11920[] = "ipcalc: bad IPv6 address: %s\n";
char g_str11940[] = "ipcalc: bad IPv6 prefix: %d\n";
char g_str11960[] = "ipcalc: error converting IPv6 prefix: %d\n";
char g_str11990[] = "%s";
char g_str119A8[] = "cr:i46bho:gmnpsv";
char g_str119C8[] = "ipcalc %s\n";
void g_v119D8 = ??void??;
void g_v11A08 = ??void??;
void g_v11A30 = ??void??;
char g_str11A50[] = "ipcalc: could not resolve %s\n";
char g_str11A70[] = "ipcalc: bad %s prefix: %s\n";
char g_str11A90[] = "%s/%u";
char g_str11A98[] = "ipcalc: cannot generate network with prefix: %u\n";
char g_str11AD0[] = "ipcalc: unexpected argument: %s\n";
char g_str11C28[] = "NETMASK=%s\n";
char g_str11C38[] = "PREFIX=%u\n";
char g_str11C48[] = "BROADCAST=%s\n";
char g_str11C58[] = "NETWORK=%s\n";
char g_str11C68[] = "REVERSEDNS=%s\n";
char g_str11C78[] = "MINADDR=%s\n";
char g_str11C88[] = "MAXADDR=%s\n";
char g_str11C98[] = "ADDRSPACE=\"%s\"\n";
char g_str11CA8[] = "ADDRSPACE=%s\n";
char g_str11CB8[] = "ADDRESSES=\"%s\"\n";
char g_str11CC8[] = "ADDRESSES=%s\n";
char g_str11CD8[] = "HOSTNAME=%s\n";
char g_str11CE8[] = "ADDRESS=%s\n";
char g_str11CF8[] = "COUNTRYCODE=%s\n";
char g_str11D08[] = "COUNTRY=\"%s\"\n";
char g_str11D18[] = "COUNTRY=%s\n";
char g_str11D28[] = "CITY=\"%s\"\n";
char g_str11D38[] = "CITY=%s\n";
char g_str11D48[] = "COORDINATES=\"%s\"\n";
Eq_n g_t12660 = 
	{
		0x32,
		0x00,
	};
char g_str12A38[] = "/usr/lib64/libGeoIP.so.1";
char g_str12A58[] = "ipcalc: could not open %s\n";
char g_str12A78[] = "_GeoIP_setup_dbfilename";
char g_str12A90[] = "GeoIP_open_type";
char g_str12AA0[] = "GeoIP_country_name_by_id";
char g_str12AC0[] = "GeoIP_delete";
char g_str12AD0[] = "GeoIP_record_by_ipnum";
char g_str12AE8[] = "GeoIP_id_by_ipnum";
char g_str12B00[] = "GeoIP_id_by_ipnum_v6";
char g_str12B18[] = "GeoIP_record_by_ipnum_v6";
char g_str12B38[] = "GeoIP_code_by_id";
Eq_n g_t12B50 = 
	{
		0x69
	};
word64 g_qw12B58 = 0x6F6E20646C756F63;
FILE * g_ptr12B60 = &g_t69662074;
ptr64 g_ptr12B68 = 7575181482799558009;
ptr64 g_ptr12B70 = 8026900398858838126;
int32 g_dw12B78 = 0x000A5049;
char g_str12B80[] = "%f,%f";
char g_str12B88[] = "%u.%u.%u.%u.in-addr.arpa.";
char g_str12BA8[] = "%u.%u.%u.in-addr.arpa.";
char g_str12BC0[] = "%u.%u.in-addr.arpa.";
char g_str12BD8[] = "%u.in-addr.arpa.";
char g_str12BF0[] = "%u-%u.%u.%u.%u.in-addr.arpa.";
char g_str12C10[] = "%u-%u.%u.%u.in-addr.arpa.";
char g_str12C30[] = "%u-%u.%u.in-addr.arpa.";
int32 g_t15180(int32 a0, char ** a1, char ** a2) = Unexpected function type (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
;
void g_t182E8() = Unexpected function type (fn void ())
;
void g_t18378() = Unexpected function type (fn void ())
;
<anonymous> * g_ptr19E18 = fn0000000000015F94;
word64 g_qw19E28 = 0x00;
Eq_n g_t69662074;

