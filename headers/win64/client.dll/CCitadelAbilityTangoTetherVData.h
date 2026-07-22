#pragma once

class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x1828, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x1918, size 0xE0, align 8
    CSoundEventName m_strDamageTarget; // offset 0x19F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGrappleHitTarget; // offset 0x1A08, size 0x10, align 8
    CSoundEventName m_strGrappleHitWorld; // offset 0x1A18, size 0x10, align 8
    CSoundEventName m_strGrappleHitNothing; // offset 0x1A28, size 0x10, align 8
};
