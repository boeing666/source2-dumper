#pragma once

class CCitadel_Ability_Fencer_ThrowBladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkLingerParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchTrailParticle; // offset 0x1AB8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1BA8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1BB8, size 0x10, align 8
    float32 m_flUpDisenageJumpRatio; // offset 0x1BC8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinDisengageAmountBack; // offset 0x1BCC, size 0x4, align 4
    float32 m_flForwardPlacementDistance; // offset 0x1BD0, size 0x4, align 4
    float32 m_flHeightAboveGround; // offset 0x1BD4, size 0x4, align 4
    CPiecewiseCurve m_velocityCurve; // offset 0x1BD8, size 0x40, align 8
    CSoundEventName m_sStartSound; // offset 0x1C18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sExpiredSound; // offset 0x1C28, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1C38, size 0x10, align 8
};
