#pragma once

class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium_Barrier : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 barrier_amt; // offset 0x1A78, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1A7C, size 0x4, align 4
    bool undispellable; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
