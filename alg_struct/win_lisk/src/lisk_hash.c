/**
 * FILE		:lisk_hash.c
 * DESC		:list some known hash funcs
 * AUTHOR	:v0.3.0 written by Alex Stocks
 * DATE		:on Sep 6, 2012
 * MOD		:modified by * on June 2, 2012
 **/

#include <stdio.h>
#include <lisk_hash.h>

u4 bkdr32(n1 *str, u4 str_len)
{
	register u4		idx;
	register u4		seed;
	register u4		hash;
	register un1*	data;

	idx		= 0;
	seed	= 131;	// 31 131 1313 13131 131313 etc..
	hash	= 0;
	data	= (un1*)(str);
	while (IS_LT(idx, str_len)) {
		hash = hash * seed + (*data++);
		idx++;
	}

	return (hash & 0x7FFFFFFF);
}

u8 bkdr64(n1 *str, u4 str_len)
{
	register u4		idx;
	register u8		seed; // 31 131 1313 13131 131313 etc..
	register u8		hash;
	register u8		mask;
	register un1*	data;

	idx		= 0;
	seed	= 131313131; // 31 131 1313 13131 131313 etc..
	hash	= 0;
	mask	= 0x7FFFFFFFFFFFFFFFLL;
	data	= (un1*)(str);
	while (IS_LT(idx, str_len)) {
		hash = hash * seed + (*data++);
		idx++;
	}

	return (hash & mask);
}

static n4 crc32_table[] = {
	0x00000000L, 0x77073096L, 0xee0e612cL, 0x990951baL, 0x076dc419L, 0x706af48fL, 0xe963a535L, 0x9e6495a3L,
	0x0edb8832L, 0x79dcb8a4L, 0xe0d5e91eL, 0x97d2d988L, 0x09b64c2bL, 0x7eb17cbdL, 0xe7b82d07L, 0x90bf1d91L,
	0x1db71064L, 0x6ab020f2L, 0xf3b97148L, 0x84be41deL, 0x1adad47dL, 0x6ddde4ebL, 0xf4d4b551L, 0x83d385c7L,
	0x136c9856L, 0x646ba8c0L, 0xfd62f97aL, 0x8a65c9ecL, 0x14015c4fL, 0x63066cd9L, 0xfa0f3d63L, 0x8d080df5L,
	0x3b6e20c8L, 0x4c69105eL, 0xd56041e4L, 0xa2677172L, 0x3c03e4d1L, 0x4b04d447L, 0xd20d85fdL, 0xa50ab56bL,
	0x35b5a8faL, 0x42b2986cL, 0xdbbbc9d6L, 0xacbcf940L, 0x32d86ce3L, 0x45df5c75L, 0xdcd60dcfL, 0xabd13d59L,
	0x26d930acL, 0x51de003aL, 0xc8d75180L, 0xbfd06116L, 0x21b4f4b5L, 0x56b3c423L, 0xcfba9599L, 0xb8bda50fL,
	0x2802b89eL, 0x5f058808L, 0xc60cd9b2L, 0xb10be924L, 0x2f6f7c87L, 0x58684c11L, 0xc1611dabL, 0xb6662d3dL,
	0x76dc4190L, 0x01db7106L, 0x98d220bcL, 0xefd5102aL, 0x71b18589L, 0x06b6b51fL, 0x9fbfe4a5L, 0xe8b8d433L,
	0x7807c9a2L, 0x0f00f934L, 0x9609a88eL, 0xe10e9818L, 0x7f6a0dbbL, 0x086d3d2dL, 0x91646c97L, 0xe6635c01L,
	0x6b6b51f4L, 0x1c6c6162L, 0x856530d8L, 0xf262004eL, 0x6c0695edL, 0x1b01a57bL, 0x8208f4c1L, 0xf50fc457L,
	0x65b0d9c6L, 0x12b7e950L, 0x8bbeb8eaL, 0xfcb9887cL, 0x62dd1ddfL, 0x15da2d49L, 0x8cd37cf3L, 0xfbd44c65L,
	0x4db26158L, 0x3ab551ceL, 0xa3bc0074L, 0xd4bb30e2L, 0x4adfa541L, 0x3dd895d7L, 0xa4d1c46dL, 0xd3d6f4fbL,
	0x4369e96aL, 0x346ed9fcL, 0xad678846L, 0xda60b8d0L, 0x44042d73L, 0x33031de5L, 0xaa0a4c5fL, 0xdd0d7cc9L,
	0x5005713cL, 0x270241aaL, 0xbe0b1010L, 0xc90c2086L, 0x5768b525L, 0x206f85b3L, 0xb966d409L, 0xce61e49fL,
	0x5edef90eL, 0x29d9c998L, 0xb0d09822L, 0xc7d7a8b4L, 0x59b33d17L, 0x2eb40d81L, 0xb7bd5c3bL, 0xc0ba6cadL,
	0xedb88320L, 0x9abfb3b6L, 0x03b6e20cL, 0x74b1d29aL, 0xead54739L, 0x9dd277afL, 0x04db2615L, 0x73dc1683L,
	0xe3630b12L, 0x94643b84L, 0x0d6d6a3eL, 0x7a6a5aa8L, 0xe40ecf0bL, 0x9309ff9dL, 0x0a00ae27L, 0x7d079eb1L,
	0xf00f9344L, 0x8708a3d2L, 0x1e01f268L, 0x6906c2feL, 0xf762575dL, 0x806567cbL, 0x196c3671L, 0x6e6b06e7L,
	0xfed41b76L, 0x89d32be0L, 0x10da7a5aL, 0x67dd4accL, 0xf9b9df6fL, 0x8ebeeff9L, 0x17b7be43L, 0x60b08ed5L,
	0xd6d6a3e8L, 0xa1d1937eL, 0x38d8c2c4L, 0x4fdff252L, 0xd1bb67f1L, 0xa6bc5767L, 0x3fb506ddL, 0x48b2364bL,
	0xd80d2bdaL, 0xaf0a1b4cL, 0x36034af6L, 0x41047a60L, 0xdf60efc3L, 0xa867df55L, 0x316e8eefL, 0x4669be79L,
	0xcb61b38cL, 0xbc66831aL, 0x256fd2a0L, 0x5268e236L, 0xcc0c7795L, 0xbb0b4703L, 0x220216b9L, 0x5505262fL,
	0xc5ba3bbeL, 0xb2bd0b28L, 0x2bb45a92L, 0x5cb36a04L, 0xc2d7ffa7L, 0xb5d0cf31L, 0x2cd99e8bL, 0x5bdeae1dL,
	0x9b64c2b0L, 0xec63f226L, 0x756aa39cL, 0x026d930aL, 0x9c0906a9L, 0xeb0e363fL, 0x72076785L, 0x05005713L,
	0x95bf4a82L, 0xe2b87a14L, 0x7bb12baeL, 0x0cb61b38L, 0x92d28e9bL, 0xe5d5be0dL, 0x7cdcefb7L, 0x0bdbdf21L,
	0x86d3d2d4L, 0xf1d4e242L, 0x68ddb3f8L, 0x1fda836eL, 0x81be16cdL, 0xf6b9265bL, 0x6fb077e1L, 0x18b74777L,
	0x88085ae6L, 0xff0f6a70L, 0x66063bcaL, 0x11010b5cL, 0x8f659effL, 0xf862ae69L, 0x616bffd3L, 0x166ccf45L,
	0xa00ae278L, 0xd70dd2eeL, 0x4e048354L, 0x3903b3c2L, 0xa7672661L, 0xd06016f7L, 0x4969474dL, 0x3e6e77dbL,
	0xaed16a4aL, 0xd9d65adcL, 0x40df0b66L, 0x37d83bf0L, 0xa9bcae53L, 0xdebb9ec5L, 0x47b2cf7fL, 0x30b5ffe9L,
	0xbdbdf21cL, 0xcabac28aL, 0x53b39330L, 0x24b4a3a6L, 0xbad03605L, 0xcdd70693L, 0x54de5729L, 0x23d967bfL,
	0xb3667a2eL, 0xc4614ab8L, 0x5d681b02L, 0x2a6f2b94L, 0xb40bbe37L, 0xc30c8ea1L, 0x5a05df1bL, 0x2d02ef8dL
};

#define	DO1(buf)	crc = crc32_table[((n4)crc ^ (*buf++)) & 0xff] ^ (crc >> 8);
#define	DO2(buf)	DO1(buf); DO1(buf);
#define	DO4(buf)	DO2(buf); DO2(buf);
#define	DO8(buf)	DO4(buf); DO4(buf);

u4 crc32(n1* str, u4 str_len)
{
	register uw		crc;
	register un1*	buf;

	crc	= 0;
	buf	= (un1*)(str);
	if (IS_NL(buf) || IS_NPN(str_len)) {
		return crc;
	}

	crc	= 0;
	crc	= crc ^ 0xffffffffL;
	buf	= (un1*)(str);
	while (IS_GE(str_len, 8)) {
		DO8(buf);
		str_len -= 8;
	}

	if (str_len)	{
		do {
			DO1(buf);
			--str_len;
		} while (IS_NZR(str_len));
	}

	return crc ^ 0xffffffffL;
}

static const u8 crc64_table[256] = {
	U8_C(0x0000000000000000), U8_C(0x7ad870c830358979),
	U8_C(0xf5b0e190606b12f2), U8_C(0x8f689158505e9b8b),
	U8_C(0xc038e5739841b68f), U8_C(0xbae095bba8743ff6),
	U8_C(0x358804e3f82aa47d), U8_C(0x4f50742bc81f2d04),
	U8_C(0xab28ecb46814fe75), U8_C(0xd1f09c7c5821770c),
	U8_C(0x5e980d24087fec87), U8_C(0x24407dec384a65fe),
	U8_C(0x6b1009c7f05548fa), U8_C(0x11c8790fc060c183),
	U8_C(0x9ea0e857903e5a08), U8_C(0xe478989fa00bd371),
	U8_C(0x7d08ff3b88be6f81), U8_C(0x07d08ff3b88be6f8),
	U8_C(0x88b81eabe8d57d73), U8_C(0xf2606e63d8e0f40a),
	U8_C(0xbd301a4810ffd90e), U8_C(0xc7e86a8020ca5077),
	U8_C(0x4880fbd87094cbfc), U8_C(0x32588b1040a14285),
	U8_C(0xd620138fe0aa91f4), U8_C(0xacf86347d09f188d),
	U8_C(0x2390f21f80c18306), U8_C(0x594882d7b0f40a7f),
	U8_C(0x1618f6fc78eb277b), U8_C(0x6cc0863448deae02),
	U8_C(0xe3a8176c18803589), U8_C(0x997067a428b5bcf0),
	U8_C(0xfa11fe77117cdf02), U8_C(0x80c98ebf2149567b),
	U8_C(0x0fa11fe77117cdf0), U8_C(0x75796f2f41224489),
	U8_C(0x3a291b04893d698d), U8_C(0x40f16bccb908e0f4),
	U8_C(0xcf99fa94e9567b7f), U8_C(0xb5418a5cd963f206),
	U8_C(0x513912c379682177), U8_C(0x2be1620b495da80e),
	U8_C(0xa489f35319033385), U8_C(0xde51839b2936bafc),
	U8_C(0x9101f7b0e12997f8), U8_C(0xebd98778d11c1e81),
	U8_C(0x64b116208142850a), U8_C(0x1e6966e8b1770c73),
	U8_C(0x8719014c99c2b083), U8_C(0xfdc17184a9f739fa),
	U8_C(0x72a9e0dcf9a9a271), U8_C(0x08719014c99c2b08),
	U8_C(0x4721e43f0183060c), U8_C(0x3df994f731b68f75),
	U8_C(0xb29105af61e814fe), U8_C(0xc849756751dd9d87),
	U8_C(0x2c31edf8f1d64ef6), U8_C(0x56e99d30c1e3c78f),
	U8_C(0xd9810c6891bd5c04), U8_C(0xa3597ca0a188d57d),
	U8_C(0xec09088b6997f879), U8_C(0x96d1784359a27100),
	U8_C(0x19b9e91b09fcea8b), U8_C(0x636199d339c963f2),
	U8_C(0xdf7adabd7a6e2d6f), U8_C(0xa5a2aa754a5ba416),
	U8_C(0x2aca3b2d1a053f9d), U8_C(0x50124be52a30b6e4),
	U8_C(0x1f423fcee22f9be0), U8_C(0x659a4f06d21a1299),
	U8_C(0xeaf2de5e82448912), U8_C(0x902aae96b271006b),
	U8_C(0x74523609127ad31a), U8_C(0x0e8a46c1224f5a63),
	U8_C(0x81e2d7997211c1e8), U8_C(0xfb3aa75142244891),
	U8_C(0xb46ad37a8a3b6595), U8_C(0xceb2a3b2ba0eecec),
	U8_C(0x41da32eaea507767), U8_C(0x3b024222da65fe1e),
	U8_C(0xa2722586f2d042ee), U8_C(0xd8aa554ec2e5cb97),
	U8_C(0x57c2c41692bb501c), U8_C(0x2d1ab4dea28ed965),
	U8_C(0x624ac0f56a91f461), U8_C(0x1892b03d5aa47d18),
	U8_C(0x97fa21650afae693), U8_C(0xed2251ad3acf6fea),
	U8_C(0x095ac9329ac4bc9b), U8_C(0x7382b9faaaf135e2),
	U8_C(0xfcea28a2faafae69), U8_C(0x8632586aca9a2710),
	U8_C(0xc9622c4102850a14), U8_C(0xb3ba5c8932b0836d),
	U8_C(0x3cd2cdd162ee18e6), U8_C(0x460abd1952db919f),
	U8_C(0x256b24ca6b12f26d), U8_C(0x5fb354025b277b14),
	U8_C(0xd0dbc55a0b79e09f), U8_C(0xaa03b5923b4c69e6),
	U8_C(0xe553c1b9f35344e2), U8_C(0x9f8bb171c366cd9b),
	U8_C(0x10e3202993385610), U8_C(0x6a3b50e1a30ddf69),
	U8_C(0x8e43c87e03060c18), U8_C(0xf49bb8b633338561),
	U8_C(0x7bf329ee636d1eea), U8_C(0x012b592653589793),
	U8_C(0x4e7b2d0d9b47ba97), U8_C(0x34a35dc5ab7233ee),
	U8_C(0xbbcbcc9dfb2ca865), U8_C(0xc113bc55cb19211c),
	U8_C(0x5863dbf1e3ac9dec), U8_C(0x22bbab39d3991495),
	U8_C(0xadd33a6183c78f1e), U8_C(0xd70b4aa9b3f20667),
	U8_C(0x985b3e827bed2b63), U8_C(0xe2834e4a4bd8a21a),
	U8_C(0x6debdf121b863991), U8_C(0x1733afda2bb3b0e8),
	U8_C(0xf34b37458bb86399), U8_C(0x8993478dbb8deae0),
	U8_C(0x06fbd6d5ebd3716b), U8_C(0x7c23a61ddbe6f812),
	U8_C(0x3373d23613f9d516), U8_C(0x49aba2fe23cc5c6f),
	U8_C(0xc6c333a67392c7e4), U8_C(0xbc1b436e43a74e9d),
	U8_C(0x95ac9329ac4bc9b5), U8_C(0xef74e3e19c7e40cc),
	U8_C(0x601c72b9cc20db47), U8_C(0x1ac40271fc15523e),
	U8_C(0x5594765a340a7f3a), U8_C(0x2f4c0692043ff643),
	U8_C(0xa02497ca54616dc8), U8_C(0xdafce7026454e4b1),
	U8_C(0x3e847f9dc45f37c0), U8_C(0x445c0f55f46abeb9),
	U8_C(0xcb349e0da4342532), U8_C(0xb1eceec59401ac4b),
	U8_C(0xfebc9aee5c1e814f), U8_C(0x8464ea266c2b0836),
	U8_C(0x0b0c7b7e3c7593bd), U8_C(0x71d40bb60c401ac4),
	U8_C(0xe8a46c1224f5a634), U8_C(0x927c1cda14c02f4d),
	U8_C(0x1d148d82449eb4c6), U8_C(0x67ccfd4a74ab3dbf),
	U8_C(0x289c8961bcb410bb), U8_C(0x5244f9a98c8199c2),
	U8_C(0xdd2c68f1dcdf0249), U8_C(0xa7f41839ecea8b30),
	U8_C(0x438c80a64ce15841), U8_C(0x3954f06e7cd4d138),
	U8_C(0xb63c61362c8a4ab3), U8_C(0xcce411fe1cbfc3ca),
	U8_C(0x83b465d5d4a0eece), U8_C(0xf96c151de49567b7),
	U8_C(0x76048445b4cbfc3c), U8_C(0x0cdcf48d84fe7545),
	U8_C(0x6fbd6d5ebd3716b7), U8_C(0x15651d968d029fce),
	U8_C(0x9a0d8ccedd5c0445), U8_C(0xe0d5fc06ed698d3c),
	U8_C(0xaf85882d2576a038), U8_C(0xd55df8e515432941),
	U8_C(0x5a3569bd451db2ca), U8_C(0x20ed197575283bb3),
	U8_C(0xc49581ead523e8c2), U8_C(0xbe4df122e51661bb),
	U8_C(0x3125607ab548fa30), U8_C(0x4bfd10b2857d7349),
	U8_C(0x04ad64994d625e4d), U8_C(0x7e7514517d57d734),
	U8_C(0xf11d85092d094cbf), U8_C(0x8bc5f5c11d3cc5c6),
	U8_C(0x12b5926535897936), U8_C(0x686de2ad05bcf04f),
	U8_C(0xe70573f555e26bc4), U8_C(0x9ddd033d65d7e2bd),
	U8_C(0xd28d7716adc8cfb9), U8_C(0xa85507de9dfd46c0),
	U8_C(0x273d9686cda3dd4b), U8_C(0x5de5e64efd965432),
	U8_C(0xb99d7ed15d9d8743), U8_C(0xc3450e196da80e3a),
	U8_C(0x4c2d9f413df695b1), U8_C(0x36f5ef890dc31cc8),
	U8_C(0x79a59ba2c5dc31cc), U8_C(0x037deb6af5e9b8b5),
	U8_C(0x8c157a32a5b7233e), U8_C(0xf6cd0afa9582aa47),
	U8_C(0x4ad64994d625e4da), U8_C(0x300e395ce6106da3),
	U8_C(0xbf66a804b64ef628), U8_C(0xc5bed8cc867b7f51),
	U8_C(0x8aeeace74e645255), U8_C(0xf036dc2f7e51db2c),
	U8_C(0x7f5e4d772e0f40a7), U8_C(0x05863dbf1e3ac9de),
	U8_C(0xe1fea520be311aaf), U8_C(0x9b26d5e88e0493d6),
	U8_C(0x144e44b0de5a085d), U8_C(0x6e963478ee6f8124),
	U8_C(0x21c640532670ac20), U8_C(0x5b1e309b16452559),
	U8_C(0xd476a1c3461bbed2), U8_C(0xaeaed10b762e37ab),
	U8_C(0x37deb6af5e9b8b5b), U8_C(0x4d06c6676eae0222),
	U8_C(0xc26e573f3ef099a9), U8_C(0xb8b627f70ec510d0),
	U8_C(0xf7e653dcc6da3dd4), U8_C(0x8d3e2314f6efb4ad),
	U8_C(0x0256b24ca6b12f26), U8_C(0x788ec2849684a65f),
	U8_C(0x9cf65a1b368f752e), U8_C(0xe62e2ad306bafc57),
	U8_C(0x6946bb8b56e467dc), U8_C(0x139ecb4366d1eea5),
	U8_C(0x5ccebf68aecec3a1), U8_C(0x2616cfa09efb4ad8),
	U8_C(0xa97e5ef8cea5d153), U8_C(0xd3a62e30fe90582a),
	U8_C(0xb0c7b7e3c7593bd8), U8_C(0xca1fc72bf76cb2a1),
	U8_C(0x45775673a732292a), U8_C(0x3faf26bb9707a053),
	U8_C(0x70ff52905f188d57), U8_C(0x0a2722586f2d042e),
	U8_C(0x854fb3003f739fa5), U8_C(0xff97c3c80f4616dc),
	U8_C(0x1bef5b57af4dc5ad), U8_C(0x61372b9f9f784cd4),
	U8_C(0xee5fbac7cf26d75f), U8_C(0x9487ca0fff135e26),
	U8_C(0xdbd7be24370c7322), U8_C(0xa10fceec0739fa5b),
	U8_C(0x2e675fb4576761d0), U8_C(0x54bf2f7c6752e8a9),
	U8_C(0xcdcf48d84fe75459), U8_C(0xb71738107fd2dd20),
	U8_C(0x387fa9482f8c46ab), U8_C(0x42a7d9801fb9cfd2),
	U8_C(0x0df7adabd7a6e2d6), U8_C(0x772fdd63e7936baf),
	U8_C(0xf8474c3bb7cdf024), U8_C(0x829f3cf387f8795d),
	U8_C(0x66e7a46c27f3aa2c), U8_C(0x1c3fd4a417c62355),
	U8_C(0x935745fc4798b8de), U8_C(0xe98f353477ad31a7),
	U8_C(0xa6df411fbfb21ca3), U8_C(0xdc0731d78f8795da),
	U8_C(0x536fa08fdfd90e51), U8_C(0x29b7d047efec8728),
};

u8 crc64(n1 *str, u4 str_len)
{
	register u4	idx;
	register u8	crc;
	register un1	byte;

	idx		= 0;
	crc		= 0;
	byte	= 0;
	for (idx = 0; IS_LT(idx, str_len); idx++) {
		byte	= (un1)(str[idx]);
		crc		= crc64_table[(un1)crc ^ byte] ^ (crc >> 8);
	}

	return crc;
}


#if 0

#include <stdio.h>
#include <time.h>

#include <string.h>
#include <map>

using namespace std;

typedef	std::map<u8, u8>			MAP;
typedef	std::map<u8, u8>::iterator	MAP_IT;
typedef	std::pair<MAP_IT, bool>		MAP_IT_PAIR;

int main(int argc, char* argv[])
{
	u4			idx;
	u4			max_idx;
	u8			hash;
	u8			fail;
	u8			time0;
	u8			time1;
	n1			str[] = "hello, world hell";
	n1			test_buf[128];
	MAP			hmap0;
	MAP			hmap1;
	MAP			hmap2;
	MAP			hmap3;
	MAP_IT		map_it;
	MAP_IT_PAIR	pair;
	max_idx = 160000000;

	time0	= time(NULL);
	fail = 0;
	for (idx = 0; idx < max_idx; idx += 13)	{
		sprintf(test_buf, "%s%u中国", str, idx);
		hash = bkdr_hash32(test_buf, strlen(test_buf));
		pair = hmap0.insert(make_pair(hash, hash));
		if (!pair.second)	{
			map_it = hmap0.find(hash);
			if (map_it != hmap0.end())	{
				//printf("%llu exist in map0\n", hash);
			} else {
				printf("%llu can not been inserted into map0\n", hash);
			}
			fail++;
		}
	}
	time1 = time(NULL);
	printf("bkdr32 fail num:%llu, costs time: %llu\n", fail, time1 - time0);
	hmap0.clear();

	time0	= time(NULL);
	fail = 0;
	for (idx = 0; idx < max_idx; idx+=13)	{
		sprintf(test_buf, "%s%u中国", str, idx);
		hash = bkdr_hash64(test_buf, strlen(test_buf));
		pair = hmap1.insert(make_pair(hash, hash));
		if (!pair.second)	{
			map_it = hmap1.find(hash);
			if (map_it != hmap1.end())	{
				//printf("%llu exist in map1\n", hash);
			} else {
				printf("%llu can not been inserted into map1\n", hash);
			}
			fail++;
		}
	}
	time1 = time(NULL);
	printf("bkdr64 fail num:%llu, costs time: %llu\n", fail, time1 - time0);
	hmap1.clear();

	time0	= time(NULL);
	fail = 0;
	for (idx = 0; idx < max_idx; idx+=13)	{
		sprintf(test_buf, "%s%u中国", str, idx);
		hash = crc32(test_buf, strlen(test_buf));
		pair = hmap2.insert(make_pair(hash, hash));
		if (!pair.second)	{
			map_it = hmap2.find(hash);
			if (map_it != hmap2.end())	{
				//printf("%llu exist in map2\n", hash);
			} else {
				printf("%llu can not been inserted into map2\n", hash);
			}
			fail++;
		}
	}
	time1 = time(NULL);
	printf("crc32 fail num:%llu, costs time: %llu\n", fail, time1 - time0);
	hmap2.clear();

	time0	= time(NULL);
	fail = 0;
	for (idx = 0; idx < max_idx; idx+=13)	{
		sprintf(test_buf, "%s%u中国", str, idx);
		hash = crc64(test_buf, strlen(test_buf));
		pair = hmap3.insert(make_pair(hash, hash));
		if (!pair.second)	{
			map_it = hmap3.find(hash);
			if (map_it != hmap3.end())	{
				//printf("%llu exist in map3\n", hash);
			} else {
				printf("%llu can not been inserted into map3\n", hash);
			}
			fail++;
		}
	}
	time1 = time(NULL);
	printf("crc64 fail num:%llu, costs time: %llu\n", fail, time1 - time0);
	hmap3.clear();

	return 0;
}

/**
 * test result
 * bkdr32 fail num:1369, costs time: 245
 * bkdr64 fail num:0, costs time 222
 * crc32 fail num:15858, costs time 222
 * crc64 fail num:0, costs time 221
 **/

#endif
