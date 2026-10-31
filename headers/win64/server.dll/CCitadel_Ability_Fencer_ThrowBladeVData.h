#pragma once

class CCitadel_Ability_Fencer_ThrowBladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkLingerParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchTrailParticle; // offset 0x1320, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1420, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UIRecastModifier; // offset 0x1430, size 0x10, align 8
    float32 m_flUpDisenageJumpRatio; // offset 0x1440, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinDisengageAmountBack; // offset 0x1444, size 0x4, align 4
    float32 m_flForwardPlacementDistance; // offset 0x1448, size 0x4, align 4
    float32 m_flHeightAboveGround; // offset 0x144C, size 0x4, align 4
    CPiecewiseCurve m_velocityCurve; // offset 0x1450, size 0x40, align 8
    CSoundEventName m_sStartSound; // offset 0x1490, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sExpiredSound; // offset 0x14A0, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x14B0, size 0x10, align 8
};
