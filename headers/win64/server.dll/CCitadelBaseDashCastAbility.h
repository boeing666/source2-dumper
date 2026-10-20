#pragma once

class CCitadelBaseDashCastAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1570, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // offset 0x14A8, size 0x4, align 4
    GameTime_t m_flDashCastStartTime; // offset 0x14AC, size 0x4, align 255
    Vector m_vDashCastDir; // offset 0x14B0, size 0xC, align 4
    char _pad_14BC[0xB4]; // offset 0x14BC
};
