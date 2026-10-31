#pragma once

class CCitadel_Ability_Baba_Ultimate2_VData : public CBaseTieredLockonAbilityVData /*0x0*/  // sizeof 0x13B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10C8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x10C8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x11A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x1288, size 0xE0, align 8
    float32 m_flChannelingMaxFallSpeed; // offset 0x1368, size 0x4, align 4 | MPropertyStartGroup
    char _pad_136C[0x4]; // offset 0x136C
    CSoundEventName m_strSnapSound; // offset 0x1370, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strRampSound; // offset 0x1380, size 0x10, align 8
    CSoundEventName m_strEmptyReleaseSound; // offset 0x1390, size 0x10, align 8 | MPropertyDescription
    float32 m_flPostChannelDelay; // offset 0x13A0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13A4[0x4]; // offset 0x13A4
    CGlobalSymbol m_strAG2UltFinishedAction; // offset 0x13A8, size 0x8, align 8 | MPropertyStartGroup
};
