#pragma once

class CCitadel_Ability_Unicorn_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1820, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatonFlameParticle; // offset 0x16D0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strBounceSound; // offset 0x17B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFiringLoopSound; // offset 0x17C0, size 0x10, align 8
    float32 m_flTargetingRadius; // offset 0x17D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flUnitHitTargetingRadius; // offset 0x17D4, size 0x4, align 4
    float32 m_flOrbHitTargetingRadius; // offset 0x17D8, size 0x4, align 4
    ELOSCheck m_eLosCheckType; // offset 0x17DC, size 0x4, align 4
    int32 m_nRicochetTargets; // offset 0x17E0, size 0x4, align 4
    float32 m_flRicochetPitchAddition; // offset 0x17E4, size 0x4, align 4
    float32 m_flOrbRicochetPitchAddition; // offset 0x17E8, size 0x4, align 4
    float32 m_flRicochetGravity; // offset 0x17EC, size 0x4, align 4
    float32 m_flOrbRicochetConeAngle; // offset 0x17F0, size 0x4, align 4
    float32 m_flRicochetConeAngle; // offset 0x17F4, size 0x4, align 4
    float32 m_flMaxRicohetDot; // offset 0x17F8, size 0x4, align 4
    float32 m_flMinTargetDot; // offset 0x17FC, size 0x4, align 4
    float32 m_flRicochetDamageScale; // offset 0x1800, size 0x4, align 4
    float32 m_flRearOffset; // offset 0x1804, size 0x4, align 4
    float32 m_flRicochetDotMaxDampening; // offset 0x1808, size 0x4, align 4
    float32 m_flRicochetDotMinDampening; // offset 0x180C, size 0x4, align 4
    float32 m_flMinVelocityDampening; // offset 0x1810, size 0x4, align 4
    float32 m_flMaxVelocityDampening; // offset 0x1814, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToPlaySound; // offset 0x1818, size 0x4, align 4
    char _pad_181C[0x4]; // offset 0x181C
};
