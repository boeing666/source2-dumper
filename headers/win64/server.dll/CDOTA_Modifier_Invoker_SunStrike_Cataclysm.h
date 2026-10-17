#pragma once

class CDOTA_Modifier_Invoker_SunStrike_Cataclysm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 area_of_effect; // offset 0x1AA8, size 0x4, align 4
    float32 damage; // offset 0x1AAC, size 0x4, align 4
    float32 vision_distance; // offset 0x1AB0, size 0x4, align 4
    float32 vision_duration; // offset 0x1AB4, size 0x4, align 4
    float32 spell_amp; // offset 0x1AB8, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1ABC, size 0x4, align 4
    VectorWS m_vSoundPos; // offset 0x1AC0, size 0xC, align 4
    bool m_bPlaySound; // offset 0x1ACC, size 0x1, align 1
    char _pad_1ACD[0x3]; // offset 0x1ACD
};
