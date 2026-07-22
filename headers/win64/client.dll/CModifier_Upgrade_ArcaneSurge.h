#pragma once

class CModifier_Upgrade_ArcaneSurge : public CCitadelModifier /*0x0*/  // sizeof 0x2C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2C0]; // offset 0x0
    CHandle< C_BaseEntity > m_hExecutedAbility; // offset 0x2C0, size 0x4, align 4
    GameTime_t m_tNextAbilityTriggerWindow; // offset 0x2C4, size 0x4, align 255
};
