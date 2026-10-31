#pragma once

class CCitadel_Ability_SwingLineVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SwingModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingAttachParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerHitSound; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerExplodeSound; // offset 0x1180, size 0x10, align 8
    float32 m_flSwingStartDelay; // offset 0x1190, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSwingMaxDuration; // offset 0x1194, size 0x4, align 4
    float32 m_flMass; // offset 0x1198, size 0x4, align 4
    float32 m_flBodyForwardForce; // offset 0x119C, size 0x4, align 4
    float32 m_flCameraForwardForce; // offset 0x11A0, size 0x4, align 4
    float32 m_flInputForce; // offset 0x11A4, size 0x4, align 4
    float32 m_flPullForce; // offset 0x11A8, size 0x4, align 4
    float32 m_flGravityForce; // offset 0x11AC, size 0x4, align 4
    float32 m_flDampingConstant; // offset 0x11B0, size 0x4, align 4
    float32 m_flIdealSpringLengthOverride; // offset 0x11B4, size 0x4, align 4
    float32 m_flTensionSpringConstant; // offset 0x11B8, size 0x4, align 4
    float32 m_flMaxSpringForce; // offset 0x11BC, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x11C0, size 0x4, align 4
    float32 m_flWhiskerLength; // offset 0x11C4, size 0x4, align 4
    float32 m_flWhiskerOffset; // offset 0x11C8, size 0x4, align 4
    float32 m_flWhiskerForce; // offset 0x11CC, size 0x4, align 4
    float32 m_flWhiskerPositionVerticalOffset; // offset 0x11D0, size 0x4, align 4
    char _pad_11D4[0x4]; // offset 0x11D4
};
