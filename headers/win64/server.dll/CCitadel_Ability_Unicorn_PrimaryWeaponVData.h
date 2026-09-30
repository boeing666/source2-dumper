#pragma once

class CCitadel_Ability_Unicorn_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x17B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1660]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatonFlameParticle; // offset 0x1660, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strBounceSound; // offset 0x1740, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFiringLoopSound; // offset 0x1750, size 0x10, align 8
    float32 m_flTargetingRadius; // offset 0x1760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flUnitHitTargetingRadius; // offset 0x1764, size 0x4, align 4
    float32 m_flOrbHitTargetingRadius; // offset 0x1768, size 0x4, align 4
    ELOSCheck m_eLosCheckType; // offset 0x176C, size 0x4, align 4
    int32 m_nRicochetTargets; // offset 0x1770, size 0x4, align 4
    float32 m_flRicochetPitchAddition; // offset 0x1774, size 0x4, align 4
    float32 m_flOrbRicochetPitchAddition; // offset 0x1778, size 0x4, align 4
    float32 m_flRicochetGravity; // offset 0x177C, size 0x4, align 4
    float32 m_flOrbRicochetConeAngle; // offset 0x1780, size 0x4, align 4
    float32 m_flRicochetConeAngle; // offset 0x1784, size 0x4, align 4
    float32 m_flMaxRicohetDot; // offset 0x1788, size 0x4, align 4
    float32 m_flMinTargetDot; // offset 0x178C, size 0x4, align 4
    float32 m_flRicochetDamageScale; // offset 0x1790, size 0x4, align 4
    float32 m_flRearOffset; // offset 0x1794, size 0x4, align 4
    float32 m_flRicochetDotMaxDampening; // offset 0x1798, size 0x4, align 4
    float32 m_flRicochetDotMinDampening; // offset 0x179C, size 0x4, align 4
    float32 m_flMinVelocityDampening; // offset 0x17A0, size 0x4, align 4
    float32 m_flMaxVelocityDampening; // offset 0x17A4, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToPlaySound; // offset 0x17A8, size 0x4, align 4
    char _pad_17AC[0x4]; // offset 0x17AC
};
