#pragma once

class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1420, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // offset 0x1230, size 0xE0, align 8
    CSoundEventName m_strImpactSound; // offset 0x1310, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DragModifier; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // offset 0x1330, size 0xE0, align 8 | MPropertyDescription
    float32 m_flLandHoldTime; // offset 0x1410, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRisingTime; // offset 0x1414, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x1418, size 0x4, align 4
    float32 m_flGroundDetectionFailsafeDelay; // offset 0x141C, size 0x4, align 4
};
