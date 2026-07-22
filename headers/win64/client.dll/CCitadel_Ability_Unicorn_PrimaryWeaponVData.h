#pragma once

class CCitadel_Ability_Unicorn_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1B10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatonFlameParticle; // offset 0x19C0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strBounceSound; // offset 0x1AA0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFiringLoopSound; // offset 0x1AB0, size 0x10, align 8
    float32 m_flTargetingRadius; // offset 0x1AC0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flUnitHitTargetingRadius; // offset 0x1AC4, size 0x4, align 4
    float32 m_flOrbHitTargetingRadius; // offset 0x1AC8, size 0x4, align 4
    ELOSCheck m_eLosCheckType; // offset 0x1ACC, size 0x4, align 4
    int32 m_nRicochetTargets; // offset 0x1AD0, size 0x4, align 4
    float32 m_flRicochetPitchAddition; // offset 0x1AD4, size 0x4, align 4
    float32 m_flOrbRicochetPitchAddition; // offset 0x1AD8, size 0x4, align 4
    float32 m_flRicochetGravity; // offset 0x1ADC, size 0x4, align 4
    float32 m_flOrbRicochetConeAngle; // offset 0x1AE0, size 0x4, align 4
    float32 m_flRicochetConeAngle; // offset 0x1AE4, size 0x4, align 4
    float32 m_flMaxRicohetDot; // offset 0x1AE8, size 0x4, align 4
    float32 m_flMinTargetDot; // offset 0x1AEC, size 0x4, align 4
    float32 m_flRicochetDamageScale; // offset 0x1AF0, size 0x4, align 4
    float32 m_flRearOffset; // offset 0x1AF4, size 0x4, align 4
    float32 m_flRicochetDotMaxDampening; // offset 0x1AF8, size 0x4, align 4
    float32 m_flRicochetDotMinDampening; // offset 0x1AFC, size 0x4, align 4
    float32 m_flMinVelocityDampening; // offset 0x1B00, size 0x4, align 4
    float32 m_flMaxVelocityDampening; // offset 0x1B04, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToPlaySound; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
