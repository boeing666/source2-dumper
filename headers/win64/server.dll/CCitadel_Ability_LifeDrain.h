#pragma once

class CCitadel_Ability_LifeDrain : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiers; // offset 0xF70, size 0x18, align 8
    GameTime_t m_tDrainLifeStopTime; // offset 0xF88, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_tSlowStartTime; // offset 0xF8C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_tSlowStopTime; // offset 0xF90, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0F94[0x104]; // offset 0xF94
};
