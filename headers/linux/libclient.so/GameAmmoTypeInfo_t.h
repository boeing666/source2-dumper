#pragma once

struct GameAmmoTypeInfo_t : public AmmoTypeInfo_t /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x34]; // offset 0x0
    int32 m_nBuySize; // offset 0x34, size 0x4, align 4
    int32 m_nCost; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x14]; // offset 0x3C
};
