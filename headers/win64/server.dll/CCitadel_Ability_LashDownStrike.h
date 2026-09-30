#pragma once

class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x16B0]; // offset 0x0
    GameTime_t m_ImpactTime; // offset 0x16B0, size 0x4, align 255
    VectorWS m_vDamagePos; // offset 0x16B4, size 0xC, align 4
    Vector m_vDamageDir; // offset 0x16C0, size 0xC, align 4
    char _pad_16CC[0x4]; // offset 0x16CC
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies; // offset 0x16D0, size 0x18, align 8
    char _pad_16E8[0x20]; // offset 0x16E8
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x1708, size 0x18, align 8
    ParticleIndex_t m_PreviewEffect; // offset 0x1720, size 0x4, align 255
    ParticleIndex_t m_ActiveEffect; // offset 0x1724, size 0x4, align 255
    char _pad_1728[0x648]; // offset 0x1728
    bool m_bIsCrashingDown; // offset 0x1D70, size 0x1, align 1
    char _pad_1D71[0x3]; // offset 0x1D71
    Vector m_vStrikeVel; // offset 0x1D74, size 0xC, align 4
    float32 m_flInitialYaw; // offset 0x1D80, size 0x4, align 4
    float32 m_flStartHeight; // offset 0x1D84, size 0x4, align 4
};
