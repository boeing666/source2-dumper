#pragma once

class CCitadel_Ability_SwingLineVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1970, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SwingModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingAttachParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerHitSound; // offset 0x1908, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerExplodeSound; // offset 0x1918, size 0x10, align 8
    float32 m_flSwingStartDelay; // offset 0x1928, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSwingMaxDuration; // offset 0x192C, size 0x4, align 4
    float32 m_flMass; // offset 0x1930, size 0x4, align 4
    float32 m_flBodyForwardForce; // offset 0x1934, size 0x4, align 4
    float32 m_flCameraForwardForce; // offset 0x1938, size 0x4, align 4
    float32 m_flInputForce; // offset 0x193C, size 0x4, align 4
    float32 m_flPullForce; // offset 0x1940, size 0x4, align 4
    float32 m_flGravityForce; // offset 0x1944, size 0x4, align 4
    float32 m_flDampingConstant; // offset 0x1948, size 0x4, align 4
    float32 m_flIdealSpringLengthOverride; // offset 0x194C, size 0x4, align 4
    float32 m_flTensionSpringConstant; // offset 0x1950, size 0x4, align 4
    float32 m_flMaxSpringForce; // offset 0x1954, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x1958, size 0x4, align 4
    float32 m_flWhiskerLength; // offset 0x195C, size 0x4, align 4
    float32 m_flWhiskerOffset; // offset 0x1960, size 0x4, align 4
    float32 m_flWhiskerForce; // offset 0x1964, size 0x4, align 4
    float32 m_flWhiskerPositionVerticalOffset; // offset 0x1968, size 0x4, align 4
    char _pad_196C[0x4]; // offset 0x196C
};
