#pragma once

class C_DOTA_Unit_Hero_Rubick : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E88]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x1E88, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x1E94, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x1EA0, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x1EAC, size 0x1, align 1
    char _pad_1EAD[0x3]; // offset 0x1EAD
    Vector m_startAbilityColorHSV1; // offset 0x1EB0, size 0xC, align 4
    Vector m_startAbilityColorHSV2; // offset 0x1EBC, size 0xC, align 4
    Vector m_startAbilityFXColorHSV; // offset 0x1EC8, size 0xC, align 4
    Vector m_currAbilityColorHSV1; // offset 0x1ED4, size 0xC, align 4
    Vector m_currAbilityColorHSV2; // offset 0x1EE0, size 0xC, align 4
    Vector m_currAbilityFXColorHSV; // offset 0x1EEC, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x1EF8, size 0x4, align 255
    char _pad_1EFC[0x4]; // offset 0x1EFC
};
