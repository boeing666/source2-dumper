#pragma once

class CCitadel_Ability_Artist_BambooGroveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyCastParticle; // offset 0x1160, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BambooModifier; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CenterEnemyModifier; // offset 0x1250, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CenterAllyModifier; // offset 0x1260, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1270, size 0x10, align 8
    CSoundEventName m_strBambooAppearSound; // offset 0x1280, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPreCastSound; // offset 0x1290, size 0x10, align 8
    bool m_bDebug; // offset 0x12A0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_12A1[0x3]; // offset 0x12A1
    float32 m_flForwardOffset; // offset 0x12A4, size 0x4, align 4
    float32 m_flNoiseFrequency; // offset 0x12A8, size 0x4, align 4
    float32 m_flNoiseStrength; // offset 0x12AC, size 0x4, align 4
    float32 m_flWallTraceMaxDistance; // offset 0x12B0, size 0x4, align 4
    float32 m_flWallTraceRadius; // offset 0x12B4, size 0x4, align 4
    float32 m_flTimeBetweenDeployments; // offset 0x12B8, size 0x4, align 4
    char _pad_12BC[0x4]; // offset 0x12BC
};
