#pragma once

class CCitadel_ArmorUpgrade_AblativeCoat : public CCitadel_Item /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    GameTime_t m_flLastDamageTime; // offset 0x14A8, size 0x4, align 255
    int32 m_iCurrentResistValue; // offset 0x14AC, size 0x4, align 4
    char _pad_14B0[0x210]; // offset 0x14B0
};
