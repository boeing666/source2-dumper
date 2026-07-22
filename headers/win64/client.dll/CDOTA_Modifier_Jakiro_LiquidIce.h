#pragma once

class CDOTA_Modifier_Jakiro_LiquidIce : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 duration; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A60, size 0x18, align 8
    int32 radius; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    bool double_head; // offset 0x1A80, size 0x1, align 1
    bool m_bForceProc; // offset 0x1A81, size 0x1, align 1
    char _pad_1A82[0x6]; // offset 0x1A82
};
