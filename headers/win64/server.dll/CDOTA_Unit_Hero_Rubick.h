#pragma once

class CDOTA_Unit_Hero_Rubick : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2048, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x2020, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x202C, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x2038, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x2044, size 0x1, align 1
    char _pad_2045[0x3]; // offset 0x2045
};
