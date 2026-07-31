#pragma once

class C_DOTA_Unit_Hero_Rubick : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1E00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D88]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x1D88, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x1D94, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x1DA0, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x1DAC, size 0x1, align 1
    char _pad_1DAD[0x3]; // offset 0x1DAD
    Vector m_startAbilityColorHSV1; // offset 0x1DB0, size 0xC, align 4
    Vector m_startAbilityColorHSV2; // offset 0x1DBC, size 0xC, align 4
    Vector m_startAbilityFXColorHSV; // offset 0x1DC8, size 0xC, align 4
    Vector m_currAbilityColorHSV1; // offset 0x1DD4, size 0xC, align 4
    Vector m_currAbilityColorHSV2; // offset 0x1DE0, size 0xC, align 4
    Vector m_currAbilityFXColorHSV; // offset 0x1DEC, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x1DF8, size 0x4, align 255
    char _pad_1DFC[0x4]; // offset 0x1DFC
};
