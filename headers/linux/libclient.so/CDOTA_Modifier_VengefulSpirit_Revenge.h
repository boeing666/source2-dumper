#pragma once

class CDOTA_Modifier_VengefulSpirit_Revenge : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_damage; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A60, size 0x18, align 8
    CHandle< C_DOTA_BaseNPC > m_hCurrentBuffHolder; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
