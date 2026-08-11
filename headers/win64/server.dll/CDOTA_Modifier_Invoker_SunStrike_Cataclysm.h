#pragma once

class CDOTA_Modifier_Invoker_SunStrike_Cataclysm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 area_of_effect; // offset 0x1A78, size 0x4, align 4
    float32 damage; // offset 0x1A7C, size 0x4, align 4
    float32 vision_distance; // offset 0x1A80, size 0x4, align 4
    float32 vision_duration; // offset 0x1A84, size 0x4, align 4
    float32 spell_amp; // offset 0x1A88, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1A8C, size 0x4, align 4
    VectorWS m_vSoundPos; // offset 0x1A90, size 0xC, align 4
    bool m_bPlaySound; // offset 0x1A9C, size 0x1, align 1
    char _pad_1A9D[0x3]; // offset 0x1A9D
};
