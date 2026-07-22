#pragma once

class C_DOTA_Unit_Hero_Rubick : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F04]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x1F04, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x1F10, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x1F1C, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x1F28, size 0x1, align 1
    char _pad_1F29[0x3]; // offset 0x1F29
    Vector m_startAbilityColorHSV1; // offset 0x1F2C, size 0xC, align 4
    Vector m_startAbilityColorHSV2; // offset 0x1F38, size 0xC, align 4
    Vector m_startAbilityFXColorHSV; // offset 0x1F44, size 0xC, align 4
    Vector m_currAbilityColorHSV1; // offset 0x1F50, size 0xC, align 4
    Vector m_currAbilityColorHSV2; // offset 0x1F5C, size 0xC, align 4
    Vector m_currAbilityFXColorHSV; // offset 0x1F68, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x1F74, size 0x4, align 255
};
