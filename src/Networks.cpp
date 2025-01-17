// all known networks
#include "Networks.h"

const Network Mainnet = {
	0x00,                     // p2pkh
	0x05,                     // p2sh
	"bc",                     // bech32
	0x80,                     // wif
	{0x04, 0x88, 0xad, 0xe4}, // xprv
	{0x04, 0x9d, 0x78, 0x78}, // yprv
	{0x04, 0xb2, 0x43, 0x0c}, // zprv
	{0x02, 0x95, 0xb0, 0x05}, // Yprv
	{0x02, 0xaa, 0x7a, 0x99}, // Zprv
	{0x04, 0x88, 0xb2, 0x1e}, // xpub
	{0x04, 0x9d, 0x7c, 0xb2}, // ypub
	{0x04, 0xb2, 0x47, 0x46}, // zpub
	{0x02, 0x95, 0xb4, 0x3f}, // Ypub
	{0x02, 0xaa, 0x7e, 0xd3}, // Zpub
	0                         // bip32 coin type
};

const Network Testnet = {
	0x6F,                     // p2pkh
	0xC4,                     // p2sh
	"tb",                     // bech32
	0xEF,                     // wif
	{0x04, 0x35, 0x83, 0x94}, // tprv
	{0x04, 0x4a, 0x4e, 0x28}, // uprv
	{0x04, 0x5f, 0x18, 0xbc}, // vprv
	{0x02, 0x42, 0x85, 0xb5}, // Uprv
	{0x02, 0x57, 0x50, 0x48}, // Vprv
	{0x04, 0x35, 0x87, 0xcf}, // tpub
	{0x04, 0x4a, 0x52, 0x62}, // upub
	{0x04, 0x5f, 0x1c, 0xf6}, // vpub
	{0x02, 0x42, 0x89, 0xef}, // Upub
	{0x02, 0x57, 0x54, 0x83}, // Vpub
	1                         // bip32 coin type
};

const Network Regtest = {
	0x6F,                     // p2pkh
	0xC4,                     // p2sh
	"bcrt",                   // bech32
	0xEF,                     // wif
	{0x04, 0x35, 0x83, 0x94}, // tprv
	{0x04, 0x4a, 0x4e, 0x28}, // uprv
	{0x04, 0x5f, 0x18, 0xbc}, // vprv
	{0x02, 0x42, 0x85, 0xb5}, // Uprv
	{0x02, 0x57, 0x50, 0x48}, // Vprv
	{0x04, 0x35, 0x87, 0xcf}, // tpub
	{0x04, 0x4a, 0x52, 0x62}, // upub
	{0x04, 0x5f, 0x1c, 0xf6}, // vpub
	{0x02, 0x42, 0x89, 0xef}, // Upub
	{0x02, 0x57, 0x54, 0x83}, // Vpub
	1                         // bip32 coin type
};

// signet is the same as testnet
const Network Signet = Testnet;

const Network *networks[4] = {&Mainnet, &Testnet, &Regtest, &Signet};
const uint8_t networks_len = 4;
