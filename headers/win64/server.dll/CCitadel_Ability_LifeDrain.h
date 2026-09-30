#pragma once

class CCitadel_Ability_LifeDrain : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiers; // offset 0x14A0, size 0x18, align 8
    GameTime_t m_tDrainLifeStopTime; // offset 0x14B8, size 0x4, align 255
    GameTime_t m_tSlowStartTime; // offset 0x14BC, size 0x4, align 255
    GameTime_t m_tSlowStopTime; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0x164]; // offset 0x14C4
};
