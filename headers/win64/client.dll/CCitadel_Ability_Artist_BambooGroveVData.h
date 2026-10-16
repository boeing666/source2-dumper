#pragma once

class CCitadel_Ability_Artist_BambooGroveVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyCastParticle; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BambooModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CenterEnemyModifier; // offset 0x15B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CenterAllyModifier; // offset 0x15C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x15D8, size 0x10, align 8
    CSoundEventName m_strBambooAppearSound; // offset 0x15E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPreCastSound; // offset 0x15F8, size 0x10, align 8
    bool m_bDebug; // offset 0x1608, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1609[0x3]; // offset 0x1609
    float32 m_flForwardOffset; // offset 0x160C, size 0x4, align 4
    float32 m_flNoiseFrequency; // offset 0x1610, size 0x4, align 4
    float32 m_flNoiseStrength; // offset 0x1614, size 0x4, align 4
    float32 m_flWallTraceMaxDistance; // offset 0x1618, size 0x4, align 4
    float32 m_flWallTraceRadius; // offset 0x161C, size 0x4, align 4
    float32 m_flTimeBetweenDeployments; // offset 0x1620, size 0x4, align 4
    char _pad_1624[0x4]; // offset 0x1624
};
