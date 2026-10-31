#pragma once

class CCitadel_Modifier_HookTargetVData : public CCitadel_Modifier_LinkVData /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    float32 m_flApproachingWhooshAnticipationTime; // offset 0x878, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flCloseEnoughDistance; // offset 0x87C, size 0x4, align 4
    float32 m_flTossUpSpeed; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
    CPiecewiseCurve m_PullSpeedScaleCurve; // offset 0x888, size 0x40, align 8
    float32 m_flReturnSpeed; // offset 0x8C8, size 0x4, align 4
    float32 m_flReturnPositionForwardOffset; // offset 0x8CC, size 0x4, align 4
    float32 m_flReturnSpeedFail; // offset 0x8D0, size 0x4, align 4
    float32 m_flReturnStuckTime; // offset 0x8D4, size 0x4, align 4
    float32 m_flFailSafeMinTime; // offset 0x8D8, size 0x4, align 4
    float32 m_flFailSafeDurationMult; // offset 0x8DC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_RestrictionModifier; // offset 0x8E0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // offset 0x8F0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strApproachingWhooshSound; // offset 0x9D0, size 0x10, align 8 | MPropertyStartGroup
};
