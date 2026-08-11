#pragma once

class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1600, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x10F0]; // offset 0x0
    GameTime_t m_ImpactTime; // offset 0x10F0, size 0x4, align 255
    Vector m_vDamagePos; // offset 0x10F4, size 0xC, align 4
    Vector m_vDamageDir; // offset 0x1100, size 0xC, align 4
    char _pad_110C[0x4]; // offset 0x110C
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies; // offset 0x1110, size 0x18, align 8
    char _pad_1128[0x20]; // offset 0x1128
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x1148, size 0x18, align 8
    ParticleIndex_t m_PreviewEffect; // offset 0x1160, size 0x4, align 255
    char _pad_1164[0x484]; // offset 0x1164
    Vector m_vStrikeVel; // offset 0x15E8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flInitialYaw; // offset 0x15F4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flStartHeight; // offset 0x15F8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_15FC[0x4]; // offset 0x15FC
};
