#pragma once

class CDOTA_Unit_Hero_Rubick : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2320, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    Vector m_stolenAbilityColorHSV1; // offset 0x22F8, size 0xC, align 4
    Vector m_stolenAbilityColorHSV2; // offset 0x2304, size 0xC, align 4
    Vector m_stolenAbilityFXColorHSV; // offset 0x2310, size 0xC, align 4
    bool m_bHasInitializedAbilityColors; // offset 0x231C, size 0x1, align 1
    char _pad_231D[0x3]; // offset 0x231D
};
