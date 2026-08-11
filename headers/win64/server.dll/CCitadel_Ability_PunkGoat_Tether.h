#pragma once

class CCitadel_Ability_PunkGoat_Tether : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1228, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF88]; // offset 0x0
    GameTime_t m_tTetherEndTime; // offset 0xF88, size 0x4, align 255
    char _pad_0F8C[0x14]; // offset 0xF8C
    bool m_bTetheringActive; // offset 0xFA0, size 0x1, align 1 | MNetworkEnable
    char _pad_0FA1[0x287]; // offset 0xFA1
};
