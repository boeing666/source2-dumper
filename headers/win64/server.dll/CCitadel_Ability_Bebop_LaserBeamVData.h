#pragma once

class CCitadel_Ability_Bebop_LaserBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1458, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RestrictionModifier; // offset 0x1080, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flCancelCooldown; // offset 0x1170, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1174[0x4]; // offset 0x1174
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1178, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x1258, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x1338, size 0xE0, align 8
    CSoundEventName m_strLaserStartSound; // offset 0x1418, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserEndSound; // offset 0x1428, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x1438, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0x1448, size 0x10, align 8
};
