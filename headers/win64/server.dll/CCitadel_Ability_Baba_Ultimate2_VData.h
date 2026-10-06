#pragma once

class CCitadel_Ability_Baba_Ultimate2_VData : public CBaseTieredLockonAbilityVData /*0x0*/  // sizeof 0x1718, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1430]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x1430, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1510, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x15F0, size 0xE0, align 8
    float32 m_flChannelingMaxFallSpeed; // offset 0x16D0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16D4[0x4]; // offset 0x16D4
    CSoundEventName m_strSnapSound; // offset 0x16D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strRampSound; // offset 0x16E8, size 0x10, align 8
    CSoundEventName m_strEmptyReleaseSound; // offset 0x16F8, size 0x10, align 8 | MPropertyDescription
    float32 m_flPostChannelDelay; // offset 0x1708, size 0x4, align 4 | MPropertyStartGroup
    char _pad_170C[0x4]; // offset 0x170C
    CGlobalSymbol m_strAG2UltFinishedAction; // offset 0x1710, size 0x8, align 8 | MPropertyStartGroup
};
