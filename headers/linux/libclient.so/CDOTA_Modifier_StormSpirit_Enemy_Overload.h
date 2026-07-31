#pragma once

class CDOTA_Modifier_StormSpirit_Enemy_Overload : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 overload_aoe; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x1A80, size 0x18, align 8
    AttackRecord_t m_nAttackRecordIndex; // offset 0x1A98, size 0x2, align 255
    char _pad_1A9A[0x6]; // offset 0x1A9A
};
