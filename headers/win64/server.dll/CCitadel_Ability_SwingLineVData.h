#pragma once

class CCitadel_Ability_SwingLineVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SwingModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingAttachParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerHitSound; // offset 0x1490, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerExplodeSound; // offset 0x14A0, size 0x10, align 8
    float32 m_flSwingStartDelay; // offset 0x14B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSwingMaxDuration; // offset 0x14B4, size 0x4, align 4
    float32 m_flMass; // offset 0x14B8, size 0x4, align 4
    float32 m_flBodyForwardForce; // offset 0x14BC, size 0x4, align 4
    float32 m_flCameraForwardForce; // offset 0x14C0, size 0x4, align 4
    float32 m_flInputForce; // offset 0x14C4, size 0x4, align 4
    float32 m_flPullForce; // offset 0x14C8, size 0x4, align 4
    float32 m_flGravityForce; // offset 0x14CC, size 0x4, align 4
    float32 m_flDampingConstant; // offset 0x14D0, size 0x4, align 4
    float32 m_flIdealSpringLengthOverride; // offset 0x14D4, size 0x4, align 4
    float32 m_flTensionSpringConstant; // offset 0x14D8, size 0x4, align 4
    float32 m_flMaxSpringForce; // offset 0x14DC, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x14E0, size 0x4, align 4
    float32 m_flWhiskerLength; // offset 0x14E4, size 0x4, align 4
    float32 m_flWhiskerOffset; // offset 0x14E8, size 0x4, align 4
    float32 m_flWhiskerForce; // offset 0x14EC, size 0x4, align 4
    float32 m_flWhiskerPositionVerticalOffset; // offset 0x14F0, size 0x4, align 4
    char _pad_14F4[0x4]; // offset 0x14F4
};
