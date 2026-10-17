#pragma once

class C_DOTA_Unit_Hero_Rubick : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2080, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x200C]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x200C, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x2018, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x2024, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x2030, size 0x1, align 1
    char _pad_2031[0x3]; // offset 0x2031
    Vector m_startAbilityColorHSV1; // offset 0x2034, size 0xC, align 4
    Vector m_startAbilityColorHSV2; // offset 0x2040, size 0xC, align 4
    Vector m_startAbilityFXColorHSV; // offset 0x204C, size 0xC, align 4
    Vector m_currAbilityColorHSV1; // offset 0x2058, size 0xC, align 4
    Vector m_currAbilityColorHSV2; // offset 0x2064, size 0xC, align 4
    Vector m_currAbilityFXColorHSV; // offset 0x2070, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x207C, size 0x4, align 255
};
