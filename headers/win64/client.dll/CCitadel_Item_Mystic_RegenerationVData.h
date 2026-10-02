#pragma once

class CCitadel_Item_Mystic_RegenerationVData : public CitadelItemVData /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RegenParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_StackNotificationModifier; // offset 0x15D8, size 0x10, align 8 | MPropertyGroupName
    HealingOverTimeLoopSoundOverride_t m_HealingLoopSoundOverride; // offset 0x15E8, size 0x38, align 8 | MPropertyGroupName
};
