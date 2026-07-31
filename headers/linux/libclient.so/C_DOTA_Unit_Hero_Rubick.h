#pragma once

class C_DOTA_Unit_Hero_Rubick : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F0C]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x1F0C, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x1F18, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x1F24, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x1F30, size 0x1, align 1
    char _pad_1F31[0x3]; // offset 0x1F31
    Vector m_startAbilityColorHSV1; // offset 0x1F34, size 0xC, align 4
    Vector m_startAbilityColorHSV2; // offset 0x1F40, size 0xC, align 4
    Vector m_startAbilityFXColorHSV; // offset 0x1F4C, size 0xC, align 4
    Vector m_currAbilityColorHSV1; // offset 0x1F58, size 0xC, align 4
    Vector m_currAbilityColorHSV2; // offset 0x1F64, size 0xC, align 4
    Vector m_currAbilityFXColorHSV; // offset 0x1F70, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x1F7C, size 0x4, align 255
};
