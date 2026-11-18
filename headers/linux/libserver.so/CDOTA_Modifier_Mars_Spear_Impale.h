#pragma once

class CDOTA_Modifier_Mars_Spear_Impale : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_nProjectileHandle; // offset 0x1AF8, size 0x4, align 4
    bool m_bLatched; // offset 0x1AFC, size 0x1, align 1
    bool m_bHitArenaOfBlood; // offset 0x1AFD, size 0x1, align 1
    char _pad_1AFE[0x2]; // offset 0x1AFE
};
