#pragma once

class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1750, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // offset 0x1560, size 0xE0, align 8
    CSoundEventName m_strImpactSound; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DragModifier; // offset 0x1650, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // offset 0x1660, size 0xE0, align 8 | MPropertyDescription
    float32 m_flLandHoldTime; // offset 0x1740, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRisingTime; // offset 0x1744, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x1748, size 0x4, align 4
    float32 m_flGroundDetectionFailsafeDelay; // offset 0x174C, size 0x4, align 4
};
