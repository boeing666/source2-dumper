#pragma once

class CCitadel_Ability_NanoDash_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1528, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1320, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x1410, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x1420, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BountyModifier; // offset 0x1430, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x1440, size 0xA0, align 8 | MPropertyStartGroup
    float32 m_flGroundBreakOffAngle; // offset 0x14E0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_14E4[0x4]; // offset 0x14E4
    CPiecewiseCurve m_SpeedCurve; // offset 0x14E8, size 0x40, align 8
};
