#pragma once

class CItem_ResonantHealing_VData : public CitadelItemVData /*0x0*/  // sizeof 0x16C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_StackNotificationModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_OnCastModifier; // offset 0x14C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RegenParticle; // offset 0x14D0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // offset 0x15B0, size 0xE0, align 8
    HealingOverTimeLoopSoundOverride_t m_HealingLoopSoundOverride; // offset 0x1690, size 0x38, align 8 | MPropertyGroupName
};
