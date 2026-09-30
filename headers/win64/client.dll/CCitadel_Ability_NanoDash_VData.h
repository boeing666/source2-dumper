#pragma once

class CCitadel_Ability_NanoDash_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1830, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1640, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x1720, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x1730, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x1740, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BountyModifier; // offset 0x1750, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x1760, size 0x88, align 8 | MPropertyStartGroup
    float32 m_flGroundBreakOffAngle; // offset 0x17E8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_17EC[0x4]; // offset 0x17EC
    CPiecewiseCurve m_SpeedCurve; // offset 0x17F0, size 0x40, align 8
};
