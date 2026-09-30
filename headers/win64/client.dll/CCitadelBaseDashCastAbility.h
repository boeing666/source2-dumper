#pragma once

class CCitadelBaseDashCastAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // offset 0x16D8, size 0x4, align 4
    GameTime_t m_flDashCastStartTime; // offset 0x16DC, size 0x4, align 255
    Vector m_vDashCastDir; // offset 0x16E0, size 0xC, align 4
    char _pad_16EC[0xB4]; // offset 0x16EC
};
