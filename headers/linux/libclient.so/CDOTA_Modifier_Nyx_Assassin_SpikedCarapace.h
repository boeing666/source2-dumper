#pragma once

class CDOTA_Modifier_Nyx_Assassin_SpikedCarapace : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 stun_duration; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
    CUtlVector< CHandle< C_BaseEntity > > m_hProcessedEnemies; // offset 0x1A60, size 0x18, align 8
};
