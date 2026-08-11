#pragma once

class CDOTA_Modifier_Medusa_VenomedVolley : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 duration; // offset 0x1A78, size 0x4, align 4
    int32 attack_count; // offset 0x1A7C, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A80, size 0x18, align 8
    bool m_bLastPrimaryIsVenomed; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x7]; // offset 0x1A99
};
