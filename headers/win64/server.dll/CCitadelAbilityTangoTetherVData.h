#pragma once

class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x13B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x14A0, size 0xE0, align 8
    CSoundEventName m_strDamageTarget; // offset 0x1580, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGrappleHitTarget; // offset 0x1590, size 0x10, align 8
    CSoundEventName m_strGrappleHitWorld; // offset 0x15A0, size 0x10, align 8
    CSoundEventName m_strGrappleHitNothing; // offset 0x15B0, size 0x10, align 8
};
