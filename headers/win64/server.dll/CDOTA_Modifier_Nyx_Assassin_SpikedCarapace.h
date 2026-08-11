#pragma once

class CDOTA_Modifier_Nyx_Assassin_SpikedCarapace : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 stun_duration; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CUtlVector< CHandle< CBaseEntity > > m_hProcessedEnemies; // offset 0x1A80, size 0x18, align 8
};
