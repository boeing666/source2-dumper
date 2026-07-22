#pragma once

class CCitadel_Ability_NanoDash_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1CA8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1AB8, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x1BA8, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x1BB8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BountyModifier; // offset 0x1BC8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x1BD8, size 0x88, align 8 | MPropertyStartGroup
    float32 m_flGroundBreakOffAngle; // offset 0x1C60, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1C64[0x4]; // offset 0x1C64
    CPiecewiseCurve m_SpeedCurve; // offset 0x1C68, size 0x40, align 8
};
