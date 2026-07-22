#pragma once

class CDOTA_Unit_Hero_Rubick : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x1F00, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x1F0C, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x1F18, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x1F24, size 0x1, align 1
    char _pad_1F25[0x3]; // offset 0x1F25
};
