#pragma once

class CCitadel_Ability_Unicorn_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatonFlameParticle; // offset 0x1360, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strBounceSound; // offset 0x1440, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFiringLoopSound; // offset 0x1450, size 0x10, align 8
    float32 m_flTargetingRadius; // offset 0x1460, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flUnitHitTargetingRadius; // offset 0x1464, size 0x4, align 4
    float32 m_flOrbHitTargetingRadius; // offset 0x1468, size 0x4, align 4
    ELOSCheck m_eLosCheckType; // offset 0x146C, size 0x4, align 4
    int32 m_nRicochetTargets; // offset 0x1470, size 0x4, align 4
    float32 m_flRicochetPitchAddition; // offset 0x1474, size 0x4, align 4
    float32 m_flOrbRicochetPitchAddition; // offset 0x1478, size 0x4, align 4
    float32 m_flRicochetGravity; // offset 0x147C, size 0x4, align 4
    float32 m_flOrbRicochetConeAngle; // offset 0x1480, size 0x4, align 4
    float32 m_flRicochetConeAngle; // offset 0x1484, size 0x4, align 4
    float32 m_flMaxRicohetDot; // offset 0x1488, size 0x4, align 4
    float32 m_flMinTargetDot; // offset 0x148C, size 0x4, align 4
    float32 m_flRicochetDamageScale; // offset 0x1490, size 0x4, align 4
    float32 m_flRearOffset; // offset 0x1494, size 0x4, align 4
    float32 m_flRicochetDotMaxDampening; // offset 0x1498, size 0x4, align 4
    float32 m_flRicochetDotMinDampening; // offset 0x149C, size 0x4, align 4
    float32 m_flMinVelocityDampening; // offset 0x14A0, size 0x4, align 4
    float32 m_flMaxVelocityDampening; // offset 0x14A4, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToPlaySound; // offset 0x14A8, size 0x4, align 4
    char _pad_14AC[0x4]; // offset 0x14AC
};
