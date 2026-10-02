#pragma once

class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1608, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x13F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x14E8, size 0xE0, align 8
    CSoundEventName m_strDamageTarget; // offset 0x15C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGrappleHitTarget; // offset 0x15D8, size 0x10, align 8
    CSoundEventName m_strGrappleHitWorld; // offset 0x15E8, size 0x10, align 8
    CSoundEventName m_strGrappleHitNothing; // offset 0x15F8, size 0x10, align 8
};
