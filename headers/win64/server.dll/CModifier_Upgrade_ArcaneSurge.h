#pragma once

class CModifier_Upgrade_ArcaneSurge : public CCitadelModifier /*0x0*/  // sizeof 0x2D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2D0]; // offset 0x0
    CHandle< CBaseEntity > m_hExecutedAbility; // offset 0x2D0, size 0x4, align 4
    GameTime_t m_tNextAbilityTriggerWindow; // offset 0x2D4, size 0x4, align 255
};
