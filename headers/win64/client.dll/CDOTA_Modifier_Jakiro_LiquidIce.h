#pragma once

class CDOTA_Modifier_Jakiro_LiquidIce : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 duration; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B00, size 0x18, align 8
    int32 radius; // offset 0x1B18, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B1C, size 0x4, align 255
    bool double_head; // offset 0x1B20, size 0x1, align 1
    bool m_bForceProc; // offset 0x1B21, size 0x1, align 1
    char _pad_1B22[0x6]; // offset 0x1B22
};
