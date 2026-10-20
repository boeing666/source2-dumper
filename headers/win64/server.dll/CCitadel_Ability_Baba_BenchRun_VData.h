#pragma once

class CCitadel_Ability_Baba_BenchRun_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1388, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    float32 m_flMaxChargeJumpDuration; // offset 0x1070, size 0x4, align 4 | MPropertyStartGroup
    Vector m_WeaponOffsetStand; // offset 0x1074, size 0xC, align 4
    Vector m_WeaponOffsetCrouch; // offset 0x1080, size 0xC, align 4
    char _pad_108C[0x4]; // offset 0x108C
    CEmbeddedSubclass< CCitadelModifier > m_BenchRunModifier; // offset 0x1090, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargedJumpParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingJumpParticle; // offset 0x1260, size 0xE0, align 8
    float32 m_flChargeJumpAnimSpeedScale; // offset 0x1340, size 0x4, align 4
    char _pad_1344[0x4]; // offset 0x1344
    CSoundEventName m_strChargingLoopSound; // offset 0x1348, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingStartSound; // offset 0x1358, size 0x10, align 8
    CSoundEventName m_strChargedJumpSound; // offset 0x1368, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x1378, size 0x10, align 8
};
