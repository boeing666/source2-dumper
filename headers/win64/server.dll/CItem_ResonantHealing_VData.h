#pragma once

class CItem_ResonantHealing_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1398, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_StackNotificationModifier; // offset 0x1180, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_OnCastModifier; // offset 0x1190, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RegenParticle; // offset 0x11A0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // offset 0x1280, size 0xE0, align 8
    HealingOverTimeLoopSoundOverride_t m_HealingLoopSoundOverride; // offset 0x1360, size 0x38, align 8 | MPropertyGroupName
};
