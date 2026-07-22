#pragma once

class C_DOTA_Unit_Hero_Rubick : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1DF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D80]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x1D80, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x1D8C, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x1D98, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x1DA4, size 0x1, align 1
    char _pad_1DA5[0x3]; // offset 0x1DA5
    Vector m_startAbilityColorHSV1; // offset 0x1DA8, size 0xC, align 4
    Vector m_startAbilityColorHSV2; // offset 0x1DB4, size 0xC, align 4
    Vector m_startAbilityFXColorHSV; // offset 0x1DC0, size 0xC, align 4
    Vector m_currAbilityColorHSV1; // offset 0x1DCC, size 0xC, align 4
    Vector m_currAbilityColorHSV2; // offset 0x1DD8, size 0xC, align 4
    Vector m_currAbilityFXColorHSV; // offset 0x1DE4, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x1DF0, size 0x4, align 255
    char _pad_1DF4[0x4]; // offset 0x1DF4
};
