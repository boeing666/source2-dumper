#pragma once

class CDOTA_Modifier_Huskar_Burning_Spear_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A58, size 0x18, align 8
    float32 duration; // offset 0x1A70, size 0x4, align 4
    float32 duration_for_nothl_conflagration; // offset 0x1A74, size 0x4, align 4
};
