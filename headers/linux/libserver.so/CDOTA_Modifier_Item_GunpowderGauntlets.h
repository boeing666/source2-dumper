#pragma once

class CDOTA_Modifier_Item_GunpowderGauntlets : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 bonus_damage; // offset 0x1AA8, size 0x4, align 4
    float32 splash_radius; // offset 0x1AAC, size 0x4, align 4
    float32 splash_pct; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AB8, size 0x18, align 8
};
