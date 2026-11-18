#pragma once

class CDOTA_Unit_Hero_Rubick : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x23B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2390]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x2390, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x239C, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x23A8, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x23B4, size 0x1, align 1
    char _pad_23B5[0x3]; // offset 0x23B5
};
