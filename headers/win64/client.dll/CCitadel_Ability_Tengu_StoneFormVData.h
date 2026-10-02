#pragma once

class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // offset 0x15A8, size 0xE0, align 8
    CSoundEventName m_strImpactSound; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DragModifier; // offset 0x1698, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // offset 0x16A8, size 0xE0, align 8 | MPropertyDescription
    float32 m_flLandHoldTime; // offset 0x1788, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRisingTime; // offset 0x178C, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x1790, size 0x4, align 4
    float32 m_flGroundDetectionFailsafeDelay; // offset 0x1794, size 0x4, align 4
};
