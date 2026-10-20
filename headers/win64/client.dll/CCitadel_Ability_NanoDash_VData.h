#pragma once

class CCitadel_Ability_NanoDash_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1518, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1310, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x1400, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BountyModifier; // offset 0x1420, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x1430, size 0xA0, align 8 | MPropertyStartGroup
    float32 m_flGroundBreakOffAngle; // offset 0x14D0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_14D4[0x4]; // offset 0x14D4
    CPiecewiseCurve m_SpeedCurve; // offset 0x14D8, size 0x40, align 8
};
