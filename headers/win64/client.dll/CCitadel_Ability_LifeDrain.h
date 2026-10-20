#pragma once

class CCitadel_Ability_LifeDrain : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1850, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    GameTime_t m_tDrainLifeStopTime; // offset 0x16E0, size 0x4, align 255
    GameTime_t m_tSlowStartTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_tSlowStopTime; // offset 0x16E8, size 0x4, align 255
    char _pad_16EC[0x164]; // offset 0x16EC
};
