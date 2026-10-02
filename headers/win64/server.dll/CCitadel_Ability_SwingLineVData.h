#pragma once

class CCitadel_Ability_SwingLineVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SwingModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingAttachParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerHitSound; // offset 0x14D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDaggerExplodeSound; // offset 0x14E8, size 0x10, align 8
    float32 m_flSwingStartDelay; // offset 0x14F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSwingMaxDuration; // offset 0x14FC, size 0x4, align 4
    float32 m_flMass; // offset 0x1500, size 0x4, align 4
    float32 m_flBodyForwardForce; // offset 0x1504, size 0x4, align 4
    float32 m_flCameraForwardForce; // offset 0x1508, size 0x4, align 4
    float32 m_flInputForce; // offset 0x150C, size 0x4, align 4
    float32 m_flPullForce; // offset 0x1510, size 0x4, align 4
    float32 m_flGravityForce; // offset 0x1514, size 0x4, align 4
    float32 m_flDampingConstant; // offset 0x1518, size 0x4, align 4
    float32 m_flIdealSpringLengthOverride; // offset 0x151C, size 0x4, align 4
    float32 m_flTensionSpringConstant; // offset 0x1520, size 0x4, align 4
    float32 m_flMaxSpringForce; // offset 0x1524, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x1528, size 0x4, align 4
    float32 m_flWhiskerLength; // offset 0x152C, size 0x4, align 4
    float32 m_flWhiskerOffset; // offset 0x1530, size 0x4, align 4
    float32 m_flWhiskerForce; // offset 0x1534, size 0x4, align 4
    float32 m_flWhiskerPositionVerticalOffset; // offset 0x1538, size 0x4, align 4
    char _pad_153C[0x4]; // offset 0x153C
};
