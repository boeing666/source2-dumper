#pragma once

class CCitadel_Ability_Baba_Ultimate2_VData : public CBaseTieredLockonAbilityVData /*0x0*/  // sizeof 0x13A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x10B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1198, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x1278, size 0xE0, align 8
    float32 m_flChannelingMaxFallSpeed; // offset 0x1358, size 0x4, align 4 | MPropertyStartGroup
    char _pad_135C[0x4]; // offset 0x135C
    CSoundEventName m_strSnapSound; // offset 0x1360, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strRampSound; // offset 0x1370, size 0x10, align 8
    CSoundEventName m_strEmptyReleaseSound; // offset 0x1380, size 0x10, align 8 | MPropertyDescription
    float32 m_flPostChannelDelay; // offset 0x1390, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1394[0x4]; // offset 0x1394
    CGlobalSymbol m_strAG2UltFinishedAction; // offset 0x1398, size 0x8, align 8 | MPropertyStartGroup
};
