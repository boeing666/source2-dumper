#pragma once

class CCitadel_Ability_Baba_BenchRun_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1398, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flMaxChargeJumpDuration; // offset 0x1080, size 0x4, align 4 | MPropertyStartGroup
    Vector m_WeaponOffsetStand; // offset 0x1084, size 0xC, align 4
    Vector m_WeaponOffsetCrouch; // offset 0x1090, size 0xC, align 4
    char _pad_109C[0x4]; // offset 0x109C
    CEmbeddedSubclass< CCitadelModifier > m_BenchRunModifier; // offset 0x10A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargedJumpParticle; // offset 0x1190, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingJumpParticle; // offset 0x1270, size 0xE0, align 8
    float32 m_flChargeJumpAnimSpeedScale; // offset 0x1350, size 0x4, align 4
    char _pad_1354[0x4]; // offset 0x1354
    CSoundEventName m_strChargingLoopSound; // offset 0x1358, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingStartSound; // offset 0x1368, size 0x10, align 8
    CSoundEventName m_strChargedJumpSound; // offset 0x1378, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x1388, size 0x10, align 8
};
