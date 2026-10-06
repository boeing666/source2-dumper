#pragma once

class CModifier_Upgrade_ArcaneSurge : public CCitadelModifier /*0x0*/  // sizeof 0x410, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x408]; // offset 0x0
    CHandle< CBaseEntity > m_hExecutedAbility; // offset 0x408, size 0x4, align 4
    GameTime_t m_tNextAbilityTriggerWindow; // offset 0x40C, size 0x4, align 255
};
