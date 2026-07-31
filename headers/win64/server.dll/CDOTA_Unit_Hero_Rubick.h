#pragma once

class CDOTA_Unit_Hero_Rubick : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F08]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x1F08, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x1F14, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x1F20, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x1F2C, size 0x1, align 1
    char _pad_1F2D[0x3]; // offset 0x1F2D
};
