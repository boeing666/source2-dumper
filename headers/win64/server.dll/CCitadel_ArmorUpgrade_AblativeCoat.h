#pragma once

class CCitadel_ArmorUpgrade_AblativeCoat : public CCitadel_Item /*0x0*/  // sizeof 0x1100, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    GameTime_t m_flLastDamageTime; // offset 0xF78, size 0x4, align 255
    int32 m_iCurrentResistValue; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable
    char _pad_0F80[0x180]; // offset 0xF80
};
