#pragma once

class CDOTA_Modifier_PhantomLancer_PhantomEdge_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 bonus_damage; // offset 0x1A58, size 0x4, align 4
    float32 duration; // offset 0x1A5C, size 0x4, align 4
    PlayerID_t m_nSourcePlayer; // offset 0x1A60, size 0x4, align 255
    char _pad_1A64[0x4]; // offset 0x1A64
    CUtlVector< GameTime_t > m_vecStackRemovalTimes; // offset 0x1A68, size 0x18, align 8
};
