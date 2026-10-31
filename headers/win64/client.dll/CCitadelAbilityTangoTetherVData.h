#pragma once

class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x1180, size 0xE0, align 8
    CSoundEventName m_strDamageTarget; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGrappleHitTarget; // offset 0x1270, size 0x10, align 8
    CSoundEventName m_strGrappleHitWorld; // offset 0x1280, size 0x10, align 8
    CSoundEventName m_strGrappleHitNothing; // offset 0x1290, size 0x10, align 8
};
