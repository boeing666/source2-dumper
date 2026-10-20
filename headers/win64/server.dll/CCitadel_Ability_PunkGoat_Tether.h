#pragma once

class CCitadel_Ability_PunkGoat_Tether : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1850, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    GameTime_t m_tTetherEndTime; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0x14]; // offset 0x14C4
    bool m_bTetheringActive; // offset 0x14D8, size 0x1, align 1
    char _pad_14D9[0x377]; // offset 0x14D9
};
