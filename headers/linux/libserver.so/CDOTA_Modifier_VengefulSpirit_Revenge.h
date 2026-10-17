#pragma once

class CDOTA_Modifier_VengefulSpirit_Revenge : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AB0, size 0x18, align 8
    CHandle< CDOTA_BaseNPC > m_hCurrentBuffHolder; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
