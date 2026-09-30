#pragma once

class CCitadel_Modifier_HookTargetVData : public CCitadel_Modifier_LinkVData /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    float32 m_flApproachingWhooshAnticipationTime; // offset 0x840, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flCloseEnoughDistance; // offset 0x844, size 0x4, align 4
    float32 m_flTossUpSpeed; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
    CPiecewiseCurve m_PullSpeedScaleCurve; // offset 0x850, size 0x40, align 8
    float32 m_flReturnSpeed; // offset 0x890, size 0x4, align 4
    float32 m_flReturnPositionForwardOffset; // offset 0x894, size 0x4, align 4
    float32 m_flReturnSpeedFail; // offset 0x898, size 0x4, align 4
    float32 m_flReturnStuckTime; // offset 0x89C, size 0x4, align 4
    float32 m_flFailSafeMinTime; // offset 0x8A0, size 0x4, align 4
    float32 m_flFailSafeDurationMult; // offset 0x8A4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_RestrictionModifier; // offset 0x8A8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // offset 0x8B8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strApproachingWhooshSound; // offset 0x998, size 0x10, align 8 | MPropertyStartGroup
};
