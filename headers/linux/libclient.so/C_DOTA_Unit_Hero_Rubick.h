#pragma once

class C_DOTA_Unit_Hero_Rubick : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2110, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x209C]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x209C, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x20A8, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x20B4, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x20C0, size 0x1, align 1
    char _pad_20C1[0x3]; // offset 0x20C1
    Vector m_startAbilityColorHSV1; // offset 0x20C4, size 0xC, align 4
    Vector m_startAbilityColorHSV2; // offset 0x20D0, size 0xC, align 4
    Vector m_startAbilityFXColorHSV; // offset 0x20DC, size 0xC, align 4
    Vector m_currAbilityColorHSV1; // offset 0x20E8, size 0xC, align 4
    Vector m_currAbilityColorHSV2; // offset 0x20F4, size 0xC, align 4
    Vector m_currAbilityFXColorHSV; // offset 0x2100, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x210C, size 0x4, align 255
};
