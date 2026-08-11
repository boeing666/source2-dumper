#pragma once

class CCitadel_Ability_UltCombo : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1118, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hTargetComboModifier; // offset 0xF70, size 0x18, align 8
    GameTime_t m_flLastAttackTime; // offset 0xF88, size 0x4, align 255
    int32 m_nAttackNum; // offset 0xF8C, size 0x4, align 4
    char _pad_0F90[0x180]; // offset 0xF90
    int32 m_iBonusHealth; // offset 0x1110, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hTarget; // offset 0x1114, size 0x4, align 4 | MNetworkEnable
};
