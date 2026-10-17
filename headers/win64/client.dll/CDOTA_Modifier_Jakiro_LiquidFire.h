#pragma once

class CDOTA_Modifier_Jakiro_LiquidFire : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 duration; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AB0, size 0x18, align 8
    float32 radius; // offset 0x1AC8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ACC, size 0x4, align 255
    bool double_head; // offset 0x1AD0, size 0x1, align 1
    bool m_bForceProc; // offset 0x1AD1, size 0x1, align 1
    char _pad_1AD2[0x6]; // offset 0x1AD2
};
