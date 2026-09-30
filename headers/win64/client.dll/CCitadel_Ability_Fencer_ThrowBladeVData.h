#pragma once

class CCitadel_Ability_Fencer_ThrowBladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkLingerParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchTrailParticle; // offset 0x1640, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1720, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1730, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1740, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UIRecastModifier; // offset 0x1750, size 0x10, align 8
    float32 m_flUpDisenageJumpRatio; // offset 0x1760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinDisengageAmountBack; // offset 0x1764, size 0x4, align 4
    float32 m_flForwardPlacementDistance; // offset 0x1768, size 0x4, align 4
    float32 m_flHeightAboveGround; // offset 0x176C, size 0x4, align 4
    CPiecewiseCurve m_velocityCurve; // offset 0x1770, size 0x40, align 8
    CSoundEventName m_sStartSound; // offset 0x17B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sExpiredSound; // offset 0x17C0, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x17D0, size 0x10, align 8
};
