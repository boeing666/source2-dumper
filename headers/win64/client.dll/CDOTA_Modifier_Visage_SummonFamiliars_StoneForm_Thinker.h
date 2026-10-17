#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 stun_radius; // offset 0x1AA8, size 0x4, align 4
    float32 stun_damage; // offset 0x1AAC, size 0x4, align 4
    float32 stun_delay; // offset 0x1AB0, size 0x4, align 4
    float32 stun_duration; // offset 0x1AB4, size 0x4, align 4
    float32 stone_duration; // offset 0x1AB8, size 0x4, align 4
    int32 m_iIntervalCount; // offset 0x1ABC, size 0x4, align 4
};
